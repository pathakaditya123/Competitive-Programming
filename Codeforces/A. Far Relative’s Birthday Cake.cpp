// https://codeforces.com/problemset/problem/629/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , ans = 0 , counter;
    cin >> n ;
    char cake [n][n] ;
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            cin >> cake[i][j] ;
        }
    }
    for(int i = 0 ; i < n ; i++) {
        //int counter = 0 ;
        for(int j = 0 ; j < n;  j++) {
            //int counter = 0 ;
            if(cake[i][j] == 'C') counter++ ;
        }
        ans += ceil(counter / 2) ;
        counter = 0 ;
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