// https://codeforces.com/problemset/problem/1092/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    string str = "abcdefghijklmnopqrstuvwxyz" ;
    int n, k ;
    cin >> n >> k ; 
    int minimalFreq = (n / k ) ;
    for(int i = 0 ; i < minimalFreq ; i++) {
        for(int j = 0 ; j < k ; j++) {
            cout << str[j];
        }
    }
    int rem = n % k ;
    for(int i = 0 ; i < rem ; i++) cout << str[k-1] ;
    cout << endl ;
}

int32_t main()
{
    fast ;
    int testcases = 1 ;
    cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/
