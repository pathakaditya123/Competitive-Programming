// https://codeforces.com/problemset/problem/1250/F
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    int m = sqrt(n) ;
    int i ; 
    //cout << m << endl ;
    for (i = m ; i >= 1 ; i--) {
        if ((i * ( n / i)) == n) {
            break ;
        }
    }
    cout << 2 * (i + n / i) << endl ;
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