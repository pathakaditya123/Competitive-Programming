// https://codeforces.com/problemset/problem/899/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , count1 = 0 , count2 = 0 ;
    cin >> n ;
    vector<int> v(n) ;
    for (auto &x : v) {
        cin >> x ;
        if (x == 1) count1++ ;
        else if (x == 2) count2++ ;
    }
    if (count1 > count2) {
        cout << count2 + (count1 - count2) / 3 << endl ;
    }
    else cout << count1 << endl ;

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