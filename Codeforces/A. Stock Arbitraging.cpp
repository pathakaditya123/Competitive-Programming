// http://codeforces.com/problemset/problem/1150/A
#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long
#define endl "\n"

void solve()
{
    int n , m , r ;
    cin >> n >> m >> r ;
    vector<int> buy(n) ;
    vector<int> sell(m) ;
    for (auto &x : buy) cin >> x ;
    for (auto &x : sell) cin >> x ;
    sort(buy.begin(), buy.end()) ;
    sort(sell.begin(), sell.end()) ;
    int rem = (r % buy[0]) ;
    int price = 0 ;
    int share = (r / buy[0]) ;
    for (int i = 0 ; i < n ; i++) {
        if (buy[i] == rem) {
            price = rem ;
            share++ ;
            break ;
        }
        if (buy[i] > rem) {
            price = rem ;
            break ;
        }
    }

    //cout << price << endl ;

    price += ( sell[m - 1] * share ) ;
    if (price >= r) cout << price << endl ;
    else cout << r << endl ;  
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