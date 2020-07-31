// http://codeforces.com/problemset/problem/1144/A

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
    for(int i = 0 ; i < str.size() ; i++) {
        s.insert(str[i]) ;
    }
    if(s.size() != str.size()) cout << "NO" << endl ;
    else
    {
        int flag = 0 ;
        sort(str.begin(), str.end()) ;
        for(int i = 0 ; i < str.size() - 1 ; i++) {
            if(str[i] + 1 == str[i + 1]) {
                //cout << str[i] << " " << str[i + 1] << endl ;
                continue ;
            }
            else{
                flag = 1 ;
                break ;
            }
        }
        if(flag) cout << "NO" << endl ;
        else cout << "YES" << endl ;
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