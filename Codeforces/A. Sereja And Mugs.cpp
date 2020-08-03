// https://codeforces.com/problemset/problem/426/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , s , sum = 0 , maxx = 0 ;
    cin >> n >> s ;
    vector < int > v (n) ;
    for(int i = 0 ; i < n ; i++) {
        cin >> v[i] ;
        sum += v[i] ;
        if(maxx < v[i]) maxx = v[i] ; 
    }
    sum -= maxx ;
    if(sum <= s) cout << "YES" << endl ;
    else cout << "NO" << endl ;
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