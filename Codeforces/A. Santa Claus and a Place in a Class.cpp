// http://codeforces.com/contest/748/problem/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;

void solve() {
    int n , m , k ;
    cin >> n >> m >> k ;
    int p = ( k  - 1) / 2 ;
    int lane  = ( p / m ) + 1  ;
    int desk = p % m + 1 ;
    char side ;
    if (k % 2) side = 'L' ;
    else side = 'R' ;
    cout << lane << " " << desk << " " << side << endl ; 
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