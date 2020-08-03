// http://codeforces.com/problemset/problem/1073/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    string str ;
    cin >> str ;
    set<char> s ;
    for(auto x : str) {
        s.insert(x) ;
    }
    if(s.size() == 1) cout << "NO" << endl ; 
    else {
        cout << "YES" << endl ;
        string ans = "" ;
        for(int i = 0 ; i < n ; i++ ){
            if(str[i] != str[i + 1]) {
                ans += str[i] ;
                ans += str[i + 1] ;
                break ;
            }
        }
        cout << ans << endl ;
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