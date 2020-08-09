// http://codeforces.com/problemset/problem/1099/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int w , h , u1, d1 , u2 , d2 , sum ;
    cin >> w >> h >> u1 >> d1 >> u2 >> d2 ;
    sum = w ;
    for(int i = h ; i >= 0 ; i--) {
        sum += i ;
        if (i == d1) sum -= u1 ;
        if (i == d2) sum -= u2 ;
        if (sum < 0) sum = 0;
    }
    cout << sum << endl ;
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
