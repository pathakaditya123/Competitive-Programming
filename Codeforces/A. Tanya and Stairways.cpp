// http://codeforces.com/contest/1005/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
 
void solve()
{
    int n ;
    cin >> n ;
    int _1 = 0 ;
    vector<int> floors , nums(n) ;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> nums[i] ;
        if (nums[i] == 1) {
            _1++;
        }
        if (nums[i] == 1 and i != 0) {
            floors.push_back(nums[i -1]) ;
        }
    }
    cout << _1 << endl ;
    floors.push_back(nums[n-1]);
    for (auto x : floors) cout << x << " " ;
 
}
 
int32_t main()
{
    fast;
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