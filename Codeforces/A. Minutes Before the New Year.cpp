// https://codeforces.com/problemset/problem/1209/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int h , m ;
    cin >> h >> m ;
    int ans = 0 ;
    ans = 60 - m ;
    h += 1 ;
    if (h == 24) cout << ans << endl ;
    else {
        int r = 24 - h ;
        r = r * 60 ;
        ans += r ;
        cout << ans << endl ;
    }
    
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
    return 0 ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/