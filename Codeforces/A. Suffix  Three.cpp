#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    string s ;
    cin >> s ;
    if (s[s.size() - 1] == 'o') cout << "FILIPINO" << endl ;
    if (s[s.size() - 1] == 'u') cout << "JAPANESE" << endl ;
    if (s[s.size() - 1] == 'a') cout << "KOREAN" << endl ;
}
int32_t main()
{
    int testcases = 1 ;
    cin >> testcases ;
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