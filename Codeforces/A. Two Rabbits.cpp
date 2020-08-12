// http://codeforces.com/problemset/problem/1305/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
    
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
    
void solve()
{
    int x , y, a, b ;
    cin >> x >> y >> a >> b ;
    if ((y - x) % (a +b) == 0 ) {
        cout << (y - x) / (a +b) << endl ;
    }
    else cout << -1 << endl ;
}
    
int32_t main()
{
    fast ;
    int testcases ;
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