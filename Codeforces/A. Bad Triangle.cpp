// http://codeforces.com/contest/1398/problem/A
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;

void solve() {
    int n ;
    cin >> n ;
    vector<int> v (n) ;
    for (auto &x : v) cin >> x ;
    if (v[0] + v[1] <= v[n - 1]) cout << 1 << " " << 2 << " "  << n << endl ;
    else cout << -1 << endl ;
}

int32_t main() 
{
    fast ;
    int testcases = 1 ;
    cin >> testcases ;
    while(testcases--) {
        solve() ;
    }
    return 0 ;
}
