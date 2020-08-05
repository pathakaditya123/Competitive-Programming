// http://codeforces.com/problemset/problem/615/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , m ;
    cin >> n >> m ;
    set<int> s ;
    while(n--) {
        int nums ;
        cin >> nums ;
        while(nums--) {
            int x ;
            cin >> x ;
            s.insert(x) ;
        }
    }
    if (s.size() == m) cout << "YES" << endl ;
    else cout << "NO" << endl ;
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
    return 0 ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/