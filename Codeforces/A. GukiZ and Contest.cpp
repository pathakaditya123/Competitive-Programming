// http://codeforces.com/problemset/problem/551/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , maxx = 0 , arr[2001] = {0};
    cin >> n ;
    vector<int> v(n);
    for(auto &x : v) {
        cin >> x ;
        if(maxx < x) maxx = x ;
        arr[x]++ ;
    }
    int rank = -1 ;
    for(int i = maxx ; i>= 1 ; i--) {
        for(int j = 0 ; j < n ; j++) {
            if(v[j] == i) {
                v[j] = rank ;
            }
        }
        rank = rank + (arr[i] * -1) ;
    }
    for(auto x : v) cout << abs(x) << " " ;
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