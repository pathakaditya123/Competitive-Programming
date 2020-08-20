// https://codeforces.com/problemset/problem/1216/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , ans = 0 ;
    cin >> n ;
    string s ;
    cin >> s ;
    for (int i = 1 ; i < n ; i += 2) {
        if (s[i] == 'a' and s[i - 1] == 'a') {
            ans++ ;
            s[i] = 'b' ;
        }
        if (s[i] == 'b' and s[i - 1] == 'b') {
            ans++ ;
            s[i] = 'a' ;
        }
    }
    cout << ans << endl << s << endl ;
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