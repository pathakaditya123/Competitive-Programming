// https://codeforces.com/problemset/problem/1041/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
	int n ;
    cin >> n ;
    int minn = 9999999999999999 , maxx = 0 ;
    vector <int> v(n) ;
    for (auto &x : v ) {
        cin >> x ;
        if (maxx < x) maxx = x ;
        if (minn > x) minn = x ; 
    }
    cout << maxx - ( (minn - 1) + n ) << endl ;
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