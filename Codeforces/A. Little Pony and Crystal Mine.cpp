// http://codeforces.com/problemset/problem/454/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= n ; j++) {
            int odd = abs (i - (n + 1) / 2 ) + abs ( j - (n + 1) /2 ) ;
            if (odd > n / 2 ) cout << "*" ;
            else cout << "D" ;
        }
        cout << endl ;
    }   
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