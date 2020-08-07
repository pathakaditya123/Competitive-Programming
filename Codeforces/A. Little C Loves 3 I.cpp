// https://codeforces.com/problemset/problem/1047/A
    
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
    
void solve()
{
    int n ;
    cin >> n ;
    if (n % 3 == 0 and (n / 3) % 3 != 0) {
        cout << n / 3 << " " << n / 3 << " " << n / 3 ;
    }  
    else
    {
        if ((n -2) % 3 == 0) {
            cout << 1 << " " << 2 << " " << n - 3 << endl ;   
        }
        else
        {
            cout << 1 << " " << 1 << " " << n - 2 << endl ;
        }
        
    }
    
}
    
int32_t main()
{
    fast;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0 ;
}
/*  CODED BY:-
    ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
    
*/