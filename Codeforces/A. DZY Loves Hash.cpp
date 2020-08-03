// http://codeforces.com/problemset/problem/447/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int p , n ;
    cin >> p >> n ;
    vector<int> nums(n) ;
    for(int i = 0 ; i < n ; i++) {
        int x ;
        cin >> x ;
        nums[i] = x % p ;
    }
    set<int> s ;
    s.insert(nums[0]) ;
    int a = 1 ;
    for(int i = 1 ; i < n ; i++) {
        s.insert(nums[i]) ;
        if( s.size() == a) {
            cout << i + 1 << endl ;
            break ;
        }
        else a++ ;
    }
    if(s.size() == n) cout << -1 << endl ;
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