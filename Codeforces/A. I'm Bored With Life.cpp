// http://codeforces.com/problemset/problem/822/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

unsigned int factorial (int n) {
    int fact = 1 ;
    for(int i = 2 ; i <= n ; i++) {
        fact *= i ;
    }
    return fact ;
}

void solve()
{
    int a , b ;
    cin >> a >> b ;
    cout << factorial( min ( a , b ) ) << endl ;
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
