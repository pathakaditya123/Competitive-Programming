// http://codeforces.com/problemset/problem/1060/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    string str ;
    cin >> str ; 
    if (n < 11) cout << 0 << endl ;
    else {
        int counter = 0 ;
        for(int i = 0 ; i < str.size(); i++) {
            if (str[i] == '8' ) counter++ ;
        }
        cout << min(counter , n / 11) << endl ;
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
