// http://codeforces.com/problemset/problem/796/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , m , k ;
    cin >> n >> m >> k ;
    vector <int> houses(n) ;
    // vector <int> canBought ;
    int minn = 999 ;
    for(int i = 0 ; i < n ; i++) {
        cin >> houses[i] ;
        if (houses[i] <= k and houses[i] != 0 ) {
            //canBought.push_back( abs ((i + 1) - m) ) ;
            minn = min (minn , abs ((i + 1) - m) ) ;
        }
    } 
    // int minn = *min_element(canBought.begin(), canBought.end()) ;
    cout << 10 * minn << endl ;
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
    return 0;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/
