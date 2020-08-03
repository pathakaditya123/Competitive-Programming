// http://codeforces.com/problemset/problem/386/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , maxx = 0 , maxx2 = 0 , index = 0;
    cin >> n ;
    vector < int > prices (n) ;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> prices[i] ;
        if ( maxx < prices[i] ) {
            maxx = prices[i] ;
            index = i + 1 ;
        } 
    }

    for(int i = 0 ; i < n ; i++) {
        if(i == index - 1 ) continue ;
        else {
            if(maxx2 < prices [i]) maxx2 = prices[i] ;
        }
    }

    cout << index << " " << maxx2 << endl ;
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