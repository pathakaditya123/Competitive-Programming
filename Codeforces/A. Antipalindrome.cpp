#include <bits/stdc++.h>
using namespace std ;
int main() {
    string str ;
    cin >> str ;
    set<char> s ;
    for(auto x : str) {
            s.insert(x);
    }
    if (s.size() == 1) cout << 0 << endl ;
    else {
            string ans = str ;
            reverse(ans.begin(), ans.end()) ;
            if(ans == str) cout << ans.size() - 1 << endl ;
            else cout << ans.size() << endl ; 
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