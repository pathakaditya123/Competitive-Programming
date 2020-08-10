// https://codeforces.com/problemset/problem/1285/B
    
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
    
void solve()
{
    int n , m ;
    cin >> n >> m ;
    char arr[n][m] ;
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            cin >> arr[i][j] ;
        }
    }
    int counter = 0 ;
    for(int i = 0 ; i < m ; i++) {
        if (arr[n -1][i] == 'D') counter++ ;
    }
    for(int i = 0 ; i < n ; i++) {
        if (arr[i][m-1] == 'R') counter++ ;
    }
    cout << counter << endl ;
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
    return 0;
}
/*  CODED BY:-
    ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
    
*/