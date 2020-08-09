// http://codeforces.com/problemset/problem/1077/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int a , b , k ;
    cin >> a >> b >> k ;
    int even = k / 2 ;
    int odd = k - even ;
    if(a == b and even == odd) cout << 0 << endl ;
    else
    {
        cout << ( (odd * a) - (even * b) ) << endl ;
    }
    
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
