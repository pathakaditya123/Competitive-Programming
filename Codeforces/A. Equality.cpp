// https://codeforces.com/problemset/problem/1038/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
    int n , k , found = 0;
    cin >> n >> k ;
    string s;
    cin >> s ;
    set<char>st ;
    for(int i = 0 ; i < n ; i++) {
        st.insert(s[i]);
    }
    if (st.size() == k ) { 
        map<char, int> mp ;
        for(int i = 0 ; i < n ; i++) {
            mp[s[i]]++;
        }
        int minn = 100000 ;
        int c = 0 ;
        for(auto x : mp) {
            if(x.second < minn) {
                minn = x.second ;
            }
            c++ ;
            if(c == k) break ;
        }
        cout << minn * k << endl ;
    }
    else cout << 0 << endl ;
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