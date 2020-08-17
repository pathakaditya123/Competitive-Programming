// http://codeforces.com/problemset/problem/1257/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , x , a , b ;
    cin >> n >> x >> a >> b ;
    int r = abs(a - b) ;
    if (x == 0) cout << abs(a - b) << endl;
    else if ( ( n - 1 ) == r ) cout << r << endl ;
    else
    {
        int maxx = max (a , b) ;
        int minn = min (a , b) ;
        maxx += x ;
        if (maxx > n) {
            int aa = n - 1 ;
            maxx = max ( a , b ) ;
            int bb = (maxx - (minn - x ) ) ;
            // cout << "N - 1 " << aa << endl ;
            // cout << "Maxx - (Minn - x) " << bb << endl ;
            cout << min(aa, bb) << endl ;
        }
        else
        {
            cout << abs(maxx - minn) << endl;
        }
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