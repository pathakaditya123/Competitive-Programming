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
    int n ;
    cin >> n ;
    vector<int> a (n) ;
    vector<int> b (n) ;
    for(auto &x : a) cin >> x ;    
    for(auto &x : b) cin >> x ;    
    sort(a.begin() , a.end()) ;
    sort(b.begin() , b.end()) ;
    for(auto x : a) cout << x << " ";
    cout << endl ;
    for(auto x : b) cout << x << " ";
    cout << endl ;
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