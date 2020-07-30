// http://codeforces.com/problemset/problem/1303/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    string str ;
    cin >> str ;
    int first1 = 0, last1 = 0;
    int counter = 0 ;
    for(int i = 0 ; i < str.size() ; i++) {
        if(str[i] == '0') counter++ ;
    } 
    if(counter == str.size()) cout << 0 << endl ;
    else {
        for(int i = 0 ; i < str.size(); i++) {
            if(str[i] == '1') {
                first1 = i ;
                break ;
            }
        }
        for(int i = str.size() - 1 ; i >= 0; i--) {
            if(str[i] == '1') {
                last1 = i ;
                break ;
            }
        }
        int ans = 0 ;
        for(int i = first1 ; i <= last1 ; i++) {
            if(str[i] == '0') ans++ ;
        }
        cout << ans << endl ;
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
    return 0 ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/