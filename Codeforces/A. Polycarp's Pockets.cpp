// http://codeforces.com/contest/1003/problem/A 
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
 
void solve()
{
    int arr[101] = {0} ; 
    int n ;
    cin >> n ;
    while (n--)
    {
        int x ;
        cin >> x ;
        arr[x]++ ;
    }
    int m = *max_element (arr , arr + 101 ) ;
    cout << m << endl ;
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