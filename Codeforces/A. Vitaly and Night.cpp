// https://codeforces.com/problemset/problem/595/A
     
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
    
void solve()
{
    int n , m ;
    cin >> n >> m ;
    int counter = 0 ;
    while(n--) {
        //int num = 2 * m ;
        for(int i = 1 ; i <= m ; i++) {
            int a , b ;
            cin >> a >> b ;
            if(a == 1 and b == 0) counter++ ;
            else if (b == 1 and a == 0) counter++ ;
            else if (a == 1 and b == 1) counter++ ;
        }
    }
    cout << counter << endl ;
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