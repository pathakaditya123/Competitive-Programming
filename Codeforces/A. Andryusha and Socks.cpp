//https://codeforces.com/problemset/problem/780/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , ans = 0 , maxx = 0 ;
    cin >> n ;
    set<int> s ;
    vector<int> v(2 * n) ;
    for (auto &x : v) {
        cin >> x ;
    }
    s.insert(v[0]) ;
    int a = s.size() ;
    ans = 1 ;
    maxx = max(ans, maxx) ;
    for (int i = 1 ; i < 2  * n ; i++) {
        s.insert(v[i]) ;
        int nn = s.size() ;
        if (a == nn ) {
            ans-- ;
            maxx = max(ans, maxx) ;
        }
        else {
            a++;
            ans++ ;
            maxx = max(ans, maxx);
        }
    }
    cout << maxx << endl ;

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