// http://codeforces.com/problemset/problem/1223/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
void solve()
{
    int a ;
    cin >> a ;
    if (a == 2 ) cout << 2 << endl ;
    else if (a % 2 == 0 ) cout << 0 << endl ;
    else cout << 1 << endl ;
}

int32_t main()
{
    fast ;
    int testcases = 1;
    cin >> testcases ;
    while (testcases--)
    {
        solve();
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