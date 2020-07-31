#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    int eights = ceil(n / 4) ;
    for(int i = 1 ; i <= n - eights; i++) 
    {
        cout << 9 ;
    }
    for(int i = 1 ; i <= eights ; i++) {
        cout << 8 ;
    }
    cout << endl ;
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