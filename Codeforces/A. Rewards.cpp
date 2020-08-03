// https://codeforces.com/problemset/problem/448/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int cup1 , cup2 , cup3 , medal1 , medal2 , medal3 ;
    cin >> cup1 >> cup2 >> cup3 >> medal1 >> medal2 >> medal3 ;
    int n , shelf = 0 ;
    cin >>  n ;
    if ( ( cup1 + cup2 + cup3 ) % 5 == 0 ) shelf += ( cup1 + cup2 + cup3 ) / 5 ;
    else shelf += ( cup1 + cup2 + cup3 ) / 5 + 1 ;
    if ( ( medal1 + medal2 + medal3 ) % 10 == 0 ) shelf += ( medal1 + medal2 + medal3 ) / 10 ;
    else shelf += ( medal1 + medal2 + medal3 ) / 10 + 1 ;
    //cout << shelf << endl ;
    if( n >= shelf ) cout << "YES" << endl ;
    else cout << "NO" << endl ;
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