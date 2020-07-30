// http://codeforces.com/problemset/problem/1220/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    string str ;
    cin >> str ;
    int _1 = 0 , _0 = 0 ;
    for(int i = 0 ; i < str.size() ; i++) {
        if(str[i] == 'z') _0 ++ ;
        if(str[i] == 'n') _1 ++ ;
    }    
    for(int i = 0 ; i < _1 ; i++ ) cout << 1 << " " ;
    for(int i = 0 ; i < _0 ; i++ ) cout << 0 << " " ;
    cout << endl ; 
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