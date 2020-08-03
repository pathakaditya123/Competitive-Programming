// http://codeforces.com/problemset/problem/421/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , a , b ;
    cin >> n >> a >> b ;
    vector<int> ans (n, 0) ;
    while(a--)  {
        int x ;
        cin >> x ;
        ans[x - 1] = 1 ;
    } 
    while(b--) {
        int x ;
        cin >> x ;
        if(ans[x - 1] == 0) {
            ans[x - 1] = 2 ;
        }
    }
    for(auto x : ans) cout << x << " " ;
    cout << endl ; 
}
int32_t main()
{
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