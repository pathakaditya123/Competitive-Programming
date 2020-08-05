// https://codeforces.com/problemset/problem/1091/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int a , b , c ;
    cin >> a >> b >> c ;
    for(int i = a ; i >= 1 ; i--) {
        if(i + 1 <= b and i + 2 <= c) {
            a = i ;
            break ;
        } 
    }
    cout << 3 * a  + 3 << endl ;
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
