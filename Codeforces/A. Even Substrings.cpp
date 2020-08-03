// https://codeforces.com/problemset/problem/1139/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , counter = 0 ;
    cin >> n ;
    string s ;
    cin >> s ;
    for ( int i = n - 1 ; i >= 0 ; i-- ) {
        if( (s[i] - 48) % 2 == 0 ) {
            counter += i + 1 ;
        }
    }
    cout << counter << endl ;
}

int32_t main()
{
    fast;
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