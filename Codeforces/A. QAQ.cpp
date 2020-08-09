// http://codeforces.com/problemset/problem/894/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    string s ;
    cin >> s ;
    int counter = 0 ;
    for(int i = 0 ; i < s.size() ; i++) 
    {
        for(int j = i + 1 ; j < s.size() ; j++) 
        {
            for(int k = j + 1 ; k < s.size() ; k++) 
            {
                if (s[i] == 'Q' and s[j] == 'A' and s[k] == 'Q') counter++ ;
            }
        }
    }
    cout << counter << endl ;
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
