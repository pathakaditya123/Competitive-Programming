// https://codeforces.com/problemset/problem/1093/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    string str ;
    cin >> str ;
    set<char> s ;
    for(int i = 0 ; i < str.size() ; i++) s.insert(str[i]) ;
    if(s.size() == 1) cout << -1 << endl ;
    else
    {
        sort(str.begin(), str.end()) ;
        cout << str << endl ;
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