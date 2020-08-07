// https://codeforces.com/problemset/problem/1056/A
    
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
    
void solve()
{
    int n , r ;
    cin >> n ;
    r = n ;
    int arr [101] = {0} ;
    while (n--) {
        int m ;
        cin >> m ;
        while(m--) {
            int x ;
            cin >> x ;
            arr[x] ++ ;
        }
    }
    for(int i = 1 ; i <= 100 ; i++) {
        if (arr[i] == r) cout << i << " " ;
    }
    cout << endl ;
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