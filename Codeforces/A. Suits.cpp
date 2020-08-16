// http://codeforces.com/problemset/problem/1271/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int a , b , c , d , e , f , total = 0 ;
    cin >> a >> b >> c >> d >> e >> f ;
    if (e > f) {
        int minn = min(a , d) ;
        total = minn * e ;
        d -= minn ;
        if (d > 0) {
            int min2  = min ( {b, c , d} ) ;
            total = total + (min2 * f) ;
            cout << total << endl ;
        }
        else cout << total << endl ;
    }  
    else if (e < f) {
        int minn = min ( {b, c , d} ) ;
        total = minn * f ;
        d -= minn ;
        if (d > 0) {
            int min2  = min ( a , d ) ;
            total = total + (min2 * e) ;
            cout << total << endl ;
        }
        else cout << total << endl ;
    }  
    else if (e == f) {
        int minn = min ( {b, c , d} ) ;
        total = minn * f ;
        d -= minn ;
        if (d > 0) {
            int min2  = min ( a , d ) ;
            total = total + (min2 * e) ;
            cout << total << endl ;
        }
        else cout << total << endl ;
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
    return 0 ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/