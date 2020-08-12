// http://codeforces.com/problemset/problem/1315/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int a , b , x , y ;
    cin >> a >> b >> x >> y ;
    cout << max(  {(x * b) , (a - 1 - x ) *b , (a * y) , (a * (b - 1 - y) ) }  ) << endl ;
}
int32_t main()
{
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