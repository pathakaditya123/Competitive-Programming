// https://codeforces.com/contest/253/problem/A
    
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
    
void solve()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string ans = "" ;
    int  boys , girls ;
    cin >> boys >> girls ;
    if (boys > girls ) {
        for(int i = 1 ; i <= girls ; i++) {
            cout << "BG" ;
        }
        for(int i = 1 ; i <= boys - girls ; i++) {
            cout << "B" ;
        }
    }
    else if (boys < girls ) {
        for(int i = 1 ; i <= boys ; i++) {
            cout << "GB" ;
        }
        for(int i = 1 ; i <= girls - boys ; i++) {
            cout << "G" ;
        }
    }
    else if (boys == girls ) {
        for(int i = 1 ; i <= girls ; i++) {
            cout << "BG" ;
        }
    }
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