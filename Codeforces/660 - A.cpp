#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    int n1 = 6 , n2 = 10 , n3 = 14 ;

    if(n <= (n1 + n2 + n3 )) {
        cout << "NO" << endl ;
    }
    else {
        if(n == 36) {
            cout << "YES" << endl ;
            cout << "5 6 10 15" << endl ;
        }
        else if (n == 44) {
            cout << "YES" << endl ;
            cout << "6 7 10 21" << endl ;
        }
        else if (n == 40 ) {
            cout << "YES" << endl ;
            cout << "5 15 6 14" << endl ;
        }
        else {
            cout << "YES" << endl ;
            cout << n1 << " " << n2 << " " << n3 << " " << n - (n1 + n2 + n3 )<< endl ;
        }
        
    }
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