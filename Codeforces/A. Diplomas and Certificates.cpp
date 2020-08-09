// http://codeforces.com/problemset/problem/818/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , k ;
    cin >> n >> k ;
    if (k >= n / 2) cout << 0 << " " << 0 << " " << n << endl ;
    else {
        if ( ( n / 2 ) % k + 1 == 0) {
            cout << ( (n / 2) / (k + 1) ) << " " << k * ( (n / 2) / (k + 1) ) << " " << n / 2 << endl ; 
        }
        else
        {
            int counter = 0 ;
            for(int i = n / 2 ; i >= 1 ; i--) {
                counter++ ; 
                if ( i % (k + 1) == 0) {
                    cout << ( (i) / (k + 1) ) << " " << k * ( (i) / (k + 1) ) ;
                    break ; 
                 }
            }
            if ( n % 2 != 0 )  cout << " " << n / 2 + (counter) << endl ;
            if ( n % 2 == 0 )  cout << " " << n / 2 + (counter - 1) << endl ;
        }
        
    }
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
