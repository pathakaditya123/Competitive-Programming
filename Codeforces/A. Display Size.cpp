// http://codeforces.com/problemset/problem/615/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    int a = sqrt(n) ;
    if (n % a == 0 ) cout << a << " " <<  n / a << endl ;
    else  {
        for(int i = a ; i >= 1 ; i--) {
            if (n % i == 0) {
                cout << i << " " <<  n / i << endl ;
                break ;
            } 
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