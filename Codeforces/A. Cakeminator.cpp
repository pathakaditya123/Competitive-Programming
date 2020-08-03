// http://codeforces.com/problemset/problem/330/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , m ;
    cin >> n >> m ;
    char cake[n][m] ;
    set<int> rows , columns ;
    for(int i =  0; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            cin >> cake[i][j] ;
            if(cake[i][j] == 'S') {
                rows.insert(i) ;
                columns.insert(j) ;
            }
        }
    }
        cout << (n * m) - (rows.size() * columns.size()) << endl ;
}
int32_t main()
{
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