// https://codeforces.com/problemset/problem/510/A
     
#include <bits/stdc++.h>    
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
     
void solve()
{
    int n , m ;
    cin >> n >> m ;
    char snake[n][m] ;
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            if ( i % 2 == 0 ) {
                snake[i][j] = '#' ;
            }
            else {
                snake[i][j] = '.' ;
            }
        }
    }
    int counter = 0 , j = m - 1 ;
    for(int i = 0 ; i < n;  i++) {
        if( i % 2 != 0 ) {
            counter++ ;
            if (counter % 2 != 0 ) {
                snake[i][j] = '#' ;
                j = 0 ;
            }
            else if (counter % 2 == 0 ) {
                snake[i][j] = '#' ;
                j = m - 1;
            }
        }
    }
    for (int i = 0 ; i < n ; i++ ) {
        for(int j = 0 ; j < m ; j++ ) {
            cout << snake[i][j];
        }
        cout << endl ;
    }
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