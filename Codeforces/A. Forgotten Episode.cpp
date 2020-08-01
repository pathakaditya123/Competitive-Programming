// http://codeforces.com/problemset/problem/440/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int arr[100001] = {0};
    int n ;
    cin >> n ;
    for(int i = 0 ; i < n - 1 ; i++) {
        int x = 0 ;
        cin >> x ;
        arr[x] ++ ;
    }
    for(int i = 1 ; i <= n ; i++) {
        if(arr[i] == 0 ) {
            cout << i << endl ;
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