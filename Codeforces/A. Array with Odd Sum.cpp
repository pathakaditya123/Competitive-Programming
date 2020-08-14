// http://codeforces.com/problemset/problem/1296/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    int even = 0 , odd = 0 ;
    vector<int> v(n) ;
    for(auto &x : v) {
        cin >> x ;
        if (x % 2 == 0 ) even++ ;
        else odd++ ;
    }
    if (odd == n and n % 2 == 0) cout << "NO" << endl ;
    else if (odd == n and n % 2 != 0 ) cout << "YES" << endl ;
    else if (odd >= 1 and even >= 1) cout << "YES" << endl ;
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