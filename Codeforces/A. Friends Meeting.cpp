// https://codeforces.com/problemset/problem/931/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , m ;
    cin >> n >> m ;    
    int diff = abs(n - m) ;
    int ans = 0 ;
    if (diff % 2 == 0) {
        for(int i = 1 ; i <= (diff / 2) ; i++) ans += i ;
        cout << 2 * ans << endl ;
    }
    else {
        for(int i = 1 ; i <= (diff / 2) ; i++) ans += i ;
        ans *= 2 ;
        ans += ( ( diff / 2 ) + 1 ) ;
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