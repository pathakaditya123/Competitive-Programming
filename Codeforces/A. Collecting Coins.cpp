// http://codeforces.com/problemset/problem/1294/A
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;

void solve() {
    int a , b ,  c , n ;
    cin >> a >> b >> c >> n ;
    int maxx = max({a, b, c}) ;
    n -= (maxx - a) ;
    n -= (maxx - b) ;
    n -= (maxx - c) ;
    if (n >= 0 and n % 3 == 0 ) cout << "YES" << endl ;
    else cout << "NO" << endl ;
}

int32_t main() {
    fast ;
    int testcases ;
    cin >> testcases ;
    while(testcases--) {
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