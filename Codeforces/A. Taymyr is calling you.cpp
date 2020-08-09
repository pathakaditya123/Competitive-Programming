// http://codeforces.com/problemset/problem/764/A    
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
    
void solve()
{
    int n , m , z ;
    cin >> n >> m >> z ;
    int num  = (z / n) + (z / m) ;
    set<int> s ;
    for(int i = n ; i <= z ; i += n) {
        s.insert(i) ;
    }
    for(int i = m ; i <= z ; i += m) {
        s.insert(i) ;
    }
    cout << num - s.size() << endl ;
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