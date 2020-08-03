// http://codeforces.com/problemset/problem/492/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

int sumOfnumber(int a) {
    int sum = 0 ;
    for(int i = 1 ; i <= a; i++) sum += i ;
    return sum ; 
}

void solve()
{
    int n , sum = 0 ;
    cin >> n ;
    for(int i = 1 ; i < 10000000 ; i++) {
        sum += sumOfnumber(i) ;
        if (n == sum) {
            cout << i << endl ;
            break ;
        }
        if( n < sum) {
            cout << i - 1 << endl ;
            break ;
        }
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