#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

bool check (int r , int g , int b , int w) {
    int temp = r % 2 + g % 2 + b % 2 + w % 2 ;
    if ( temp > 1 ) return false ;
    else return true ; 
}

void solve()
{
    int r , g, b, w ;
    cin >> r >> g >> b >> w ;
    if (check(r , g , b, w)) cout << "YES" << endl ;
    else if (r > 0 and  g > 0  and b > 0 and check(r - 1 , g - 1 , b - 1 , w + 1)) cout << "YES" << endl ;
    else cout << "NO" << endl ;
}

int32_t main()
{
    fast;
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