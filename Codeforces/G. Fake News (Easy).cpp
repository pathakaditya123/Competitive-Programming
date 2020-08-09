// http://codeforces.com/problemset/problem/802/G

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int _h = 0 , _e = 0 , _i1 = 0 , _d = 0 ,_i2 = 0 ;
    string s ;
    cin >> s ;
    for(int i = 0 ; i < s.size() ; i++) {
        if(s[i] == 'h' ) {
            _h = i ;
            break ;
        }
    }
    for(int i = _h + 1 ; i < s.size() ; i++) {
        if(s[i] == 'e' ) {
            _e = i ;
            break ;
        }
    }
    for(int i = _e + 1 ; i < s.size() ; i++) {
        if(s[i] == 'i' ) {
            _i1 = i ;
            break ;
        }
    }
    for(int i = _i1 + 1 ; i < s.size() ; i++) {
        if(s[i] == 'd' ) {
            _d = i ;
            break ;
        }
    }
    for(int i = _d + 1; i < s.size() ; i++) {
        if(s[i] == 'i' ) {
            _i2 = i ;
            break ;
        }
    }
    
    //cout << _h << " " << _e << " " << _i1 << " " << _d << " " << _i2 << endl ;
    if (_h < _e and _e < _i1 and _i1 < _d and _d < _i2) {
        cout << "YES" << endl ;
    }
    else cout << "NO" << endl ;
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
    return 0;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/
