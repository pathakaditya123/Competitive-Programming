// https://codeforces.com/problemset/problem/1015/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
     
void solve()
{
    int n , maximum ;
    cin >> n >> maximum ;
    vector<int> v (maximum + 1) ;
    for(int i = 0 ; i < maximum + 1 ; i++) {
        v[i] = i ;
    }
    while(n--) {
        int l , r ;
        cin >> l >> r ;
        for(int i = l ; i <= r ; i++) {
            v[i] = 0 ;
        }
    }
    int count = 0 , count2 = 0;
    for(int i = 1 ; i <= maximum ; i++) {
        if (v[i] != 0) {
            count2++ ;
            //cout << v[i] << " ";
        }
        else count++ ;
    }
    if (count == maximum) cout << 0 ;
    else
    {
        cout << count2 << endl ; 
        for(auto x :v) {
            if (x != 0) cout << x << " ";
        }
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