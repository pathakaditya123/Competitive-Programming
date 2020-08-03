// http://codeforces.com/problemset/problem/735/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , k ;
    cin >> n >> k ;
    string str ;
    cin >> str ;
    int posTarget , posGrass ;
    for(int i = 0 ; i < n ; i++) {
        if(str[i] == 'G') posGrass = i ;
        if(str[i] == 'T') posTarget = i ;
    }
    if(posGrass < posTarget) {
        if((posTarget - posGrass) % k != 0) {
            cout << "NO" << endl ;
        }
        else {
            int flag = 0 ;
            for(int i = posGrass + k ; i <= posTarget ; i += k) {
                if(str[i] == '#') {
                    flag = 1 ;
                    break ;
                } 
            }
            if(flag) cout << "NO" << endl ;
            else cout << "YES" << endl ;
        }
    }
    else if (posGrass > posTarget) {
        if((posGrass - posTarget) % k != 0) {
            cout << "NO" << endl ;
        }
        else {
            int flag = 0 ;
            for(int i = posGrass - k ; i >= posTarget ; i -= k) {
                if(str[i] == '#') {
                    flag = 1 ;
                    break ;
                } 
            }
            if(flag) cout << "NO" << endl ;
            else cout << "YES" << endl ;
        }
    }
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
/*


100 20
.....G................................................................................T.............
*/
