// http://codeforces.com/problemset/problem/581/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int red , blue ;
    cin >> red >> blue ;
    cout << min(red, blue) << " "  ;
    int r = red - min(red, blue) ;
    int b = blue - min(red, blue) ;
    cout << ( r + b ) / 2 << endl ; 
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