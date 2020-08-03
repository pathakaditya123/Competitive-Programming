//http://codeforces.com/problemset/problem/1284/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , m ;
    cin >> n >> m ;
    vector<string> a(n) , b(m);
    for(auto &x : a) cin >> x ;
    for(auto &x : b) cin >> x ;
    int q ;
    cin >> q ;
    while(q--) {
        int x ;
        cin >> x ;
        string ans = "" ;
        if(x > n) {
            if ( (x % n ) == 0) ans += a[n - 1] ;
            else ans += a[ ( x % n ) - 1] ;
        }
        else ans += a[x-1] ;
        if(x > m) {
            if ( (x % m ) == 0) ans += b[m - 1] ;
            else ans += b[( x % m ) - 1] ;
        }
        else ans += b[x-1] ;
        cout << ans << endl ;
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