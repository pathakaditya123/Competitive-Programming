// https://codeforces.com/problemset/problem/1054/A
    
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
    
void solve()
{
    int x , y, z , t1, t2, t3 ;
    cin >> x >> y >> z >> t1 >> t2 >> t3 ;
    int elevator = ( abs (x - z ) ) * t2 + (3 * t3) + (abs (x - y) * t2 ) ;
    int stairs = (abs (x - y) * t1) ;
    //cout << elevator << " " << stairs << endl ;
    if (elevator <= stairs) cout << "YES" << endl ;
    else cout << "NO" << endl ;  
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