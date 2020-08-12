// http://codeforces.com/problemset/problem/1307/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , d ;
    cin >> n >> d ;
    int v[105] = {0} ;
    for(int i = 1 ; i <= n ; i++) {
        cin >> v[i] ;
    } 
    //for (auto x : v) cout << x << " ";
    for(int i = 2 ; i <= n ; i++) {
        int move = min (v[i] , d / (i - 1) ) ;
        v[1] += move ;
        d -= move * (i - 1) ;
    }
    cout << v[1] << endl ;
}

int32_t main()
{
    fast ;
    int testcases = 1 ;
    cin >> testcases ;
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
