// http://codeforces.com/problemset/problem/746/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int a , b , c ;
    cin >> a >> b >> c ;
    for (int i = a ; i >= 0 ;i--) {
        if (i * 2 <= b and i * 4 <= c) {
            a = i ;
            break ;
        }
    }
    cout << ( a + 2 * a + 4 * a ) << endl ;
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
    return 0 ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/