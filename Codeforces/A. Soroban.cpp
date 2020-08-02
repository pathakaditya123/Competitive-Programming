// http://codeforces.com/problemset/problem/363/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    string str ;
    cin >> str ;
    reverse(str.begin() , str.end()) ;
    map < char, string > nums ;
    nums['0'] = "O-|-OOOO" ;  
    nums['1'] = "O-|O-OOO" ;  
    nums['2'] = "O-|OO-OO" ;  
    nums['3'] = "O-|OOO-O" ;  
    nums['4'] = "O-|OOOO-" ;  
    nums['5'] = "-O|-OOOO" ;  
    nums['6'] = "-O|O-OOO" ;  
    nums['7'] = "-O|OO-OO" ;  
    nums['8'] = "-O|OOO-O" ;  
    nums['9'] = "-O|OOOO-" ;
    //for(auto x : nums) cout << x.first << " " << x.second << endl ;
    for(int i = 0 ; i < str.size() ; i++) {
        auto itr =  nums.find(str[i]) ;
        cout << itr->second << endl; 
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