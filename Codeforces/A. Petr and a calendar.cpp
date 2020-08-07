// http://codeforces.com/problemset/problem/760/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
  
void solve()
{
    int month , weekDay ;
    cin >> month >> weekDay ;
    if(month == 1) {
        if (weekDay >= 1 and weekDay <= 5) cout << 5 ;
        else cout << 6 << endl ;
    }
    if(month == 2) {
        if (weekDay == 1 ) cout << 4 ;
        else cout << 5 << endl ;
    }
    if(month == 3) {
        if (weekDay >= 1 and weekDay <= 5) cout << 5 ;
        else cout << 6 << endl ;
    }
    if(month == 4) {
        if (weekDay >= 1 and weekDay <= 6) cout << 5 ;
        else cout << 6 << endl ;
    }
    if(month == 5) {
        if (weekDay >= 1 and weekDay <= 5) cout << 5 ;
        else cout << 6 << endl ;
    }
    if(month == 6) {
        if (weekDay >= 1 and weekDay <= 6) cout << 5 ;
        else cout << 6 << endl ;
    }
    if(month == 7) {
        if (weekDay >= 1 and weekDay <= 5) cout << 5 ;
        else cout << 6 << endl ;
    }
    if(month == 8) {
        if (weekDay >= 1 and weekDay <= 5) cout << 5 ;
        else cout << 6 << endl ;
    }
    if(month == 9) {
        if (weekDay >= 1 and weekDay <= 6) cout << 5 ;
        else cout << 6 << endl ;
    }
    if(month == 10) {
        if (weekDay >= 1 and weekDay <= 5 ) cout << 5 ;
        else cout << 6 << endl ;
    }
    if(month == 11) {
        if (weekDay >= 1 and weekDay <= 6) cout << 5 ;
        else cout << 6 << endl ;
    }
    if(month == 12) {
        if (weekDay >= 1 and weekDay <= 5) cout << 5 ;
        else cout << 6 << endl ;
    }
    
}
    
int32_t main()
{
    fast ;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0;
}
/*  CODED BY:-
    ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
    
*/