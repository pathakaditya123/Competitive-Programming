// https://codeforces.com/problemset/problem/572/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n1 , n2 ;
    cin >> n1 >> n2 ;
    int k , m ;
    cin >> k >> m ;
    vector<int> v1(n1) , v2(n2) ;
    for (auto &x : v1) cin >> x ;
    for (auto &x : v2) cin >> x ;
    bool flag = false ;
    for (int i = 0; i < k;  i++) {
        if (v1[i] >= v2[n2 - m]) {
            flag = true ;
            break ;
        }
    }
    if (flag) cout << "NO" << endl ;
    else cout << "YES" << endl ;
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