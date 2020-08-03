// https://codeforces.com/problemset/problem/1092/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    vector<int> v(3) ;
    int min_index = 999 ;
    for(int i = 0 ; i < 3 ; i++ ) {
        cin >> v[i] ;
        if (v[i] < min_index) {
            min_index = i ;
        }
    }
    if(min_index == 0) {
        if( v[0] + 1 <= v[1] and v[0] + 2 <= v[2]) {

        }
    }
    if(min_index == 1) {
        
    }
    if(min_index == 2) {
        
    }
    
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
    return 0;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/
