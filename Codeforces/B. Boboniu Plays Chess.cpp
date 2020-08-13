#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
int n , m , x , y ;

void print(int i , int j) {
    cout << ( (i + x - 2) % n + 1 ) << " " << ( (j + y - 2 ) % m + 1) << endl ;
}

void solve()
{
    cin >> n >> m >> x >> y ;
    for (int i = 1 ; i <= n ; i ++) {
        if ( i & 1 ) {
            for (int j = 1 ; j <= m ; j++) {
                print(i, j) ;
            }
        }
        else
        {
            for (int j = m ; j >= 1 ; j--) {
                print(i, j) ;
            }
        }
        
    }
}

void solve2 () {
    cin >> n >> m >> x >> y ;
    cout << x << " " << y << endl ;
    for (int i = 1 ; i <= n; i++) {
        if (i != x) cout << i << " " << y << endl ;
    }
    
    int direction = 0 ; 

    for(int i = 1 ; i <= m ; i++) {
        if (i == y) continue ;
        if ( direction == 0 ) {
            cout << n << " " << i << endl ;
            for (int j = n - 1 ; j >= 1 ; j--) {
                cout << j << " " << i << endl ;
            }
            direction = 1 ;
        }
        else
        {
            cout << 1 << " " << i << endl ;
            for (int j = 2 ; j <= n ; j++) {
                cout << j << " " << i << endl ;
                direction = 0 ;
            } 
        }
        
    }
}

int32_t main()
{
    fast;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
        solve2() ;
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