// https://codeforces.com/problemset/problem/1013/A
    
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
    
void solve()
{
    int n , m, sum1 = 0 , sum2 = 0 ;
    cin >> n ;
    m = n ;
    while(n--) {
        int x ;
        cin >> x ;
        sum1 += x ;
    }
    while(m--) {
        int x ;
        cin >> x ;
        sum2 += x ;
    }
    if(sum1 < sum2) cout << "NO" << endl ;
    else cout << "YES" << endl ;
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