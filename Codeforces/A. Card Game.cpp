// http://codeforces.com/problemset/problem/1270/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , k1 , k2 ;
    cin >> n >> k1 >> k2 ;
    vector<int> a(k1) ;   
    vector<int> b(k2) ; 
    for (auto &x : a) cin >> x ;  
    for (auto &x : b) cin >> x ;
    int m1 = *max_element(a.begin() , a.end()) ;  
    int m2 = *max_element(b.begin() , b.end()) ;
    if (m1 > m2) cout << "YES" << endl ;
    else cout << "NO" << endl ;  
}
int32_t main()
{
    fast ;
    int testcases = 1 ;
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