// http://codeforces.com/contest/1401/problem/C
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
void solve()
{
    int n ;
    cin >> n ;
    vector<int> v(n) ;
    for (auto &x : v) {
        cin >> x ;
    }
    int flag = 0 ;  
    bool so = is_sorted(v.begin() , v.end()) ;  
    if (so) {
        cout << "YES" << endl ;
    }
    else {
        int minn  =  *min_element(v.begin(), v.end()) ;
        vector<int>v2(v.begin() , v.end());
        sort(v.begin() , v.end()) ;
        for (int i = 0 ; i < n ; i++) {
            if (v[i] == v2[i]) continue ;
            else {
                int a = __gcd(v[i] , v2[i]) ;
                if (a != minn and v2[i] % v[0] != 0 ) {
                    flag = 1 ;
                    break ;
                }
            }
        }
        if (flag) cout << "NO" << endl ;
        else cout << "YES" << endl ; 
    }
}

int32_t main()
{
    fast ;
    int testcases = 1;
    cin >> testcases ;
    while (testcases--)
    {
        solve();
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