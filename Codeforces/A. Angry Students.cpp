// http://codeforces.com/problemset/problem/1287/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , counter = 0 , indexx ;
    cin >> n ;
    string str ;
    cin >> str ;
    set<char> s ;
    for (auto x : str) s.insert(x) ;
    if (s.size() == 1) cout << 0 << endl ;
    else {
        vector<int> A ;
        for (int i = 0 ; i < n ; i++) {
            if (str[i] == 'A' ) {
                indexx = i ;
                break ;
            }
        }
        if (indexx == n - 1) cout << 0 << endl ;
        else
        {
            for (int i = indexx ; i < n ; i++) {
                if(str[i] == 'P') {
                    counter++ ;
                }
                if (str[i] == 'A' or i == n - 1) {
                    A.push_back(counter) ;
                    counter = 0 ;
                }
            }
            // for (auto x : A) cout << x << " " ;
            // cout << endl ;
            int m = *max_element(A.begin() , A.end()) ;
            cout << m << endl ;
        }
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