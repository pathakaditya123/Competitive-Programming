#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    vector <int> years(n) ;
    for(auto &x : years) cin >> x ;
    if (n == 1) cout << years[0] << endl ;
    else {
        sort(years.begin() , years.end()) ;
        if (n & 1 ) cout << years[(n / 2)] << endl ;
        else cout << years[(n / 2) - 1 ] << endl ;
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
    return 0;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/
