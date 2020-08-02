// http://codeforces.com/problemset/problem/401/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve() 
{
    int n , x , sum = 0 , cards = 0;
    cin >> n >> x ;
    vector <int> v (n) ;
    for(auto &x : v) {
        cin >> x ;
        sum += x ;
    }
    sum = abs(sum) ;
    if(sum == 0) cout << 0 << endl ;
    else {
        if(sum % x == 0 ) cout << sum / x << endl ;
        else cout << (sum / x ) + 1 << endl ;
    }
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