#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
void solve()
{
    int a , b ;
    cin >> a >> b ;
    if (b == 0) {
        if (a % 2 == 0) cout << 0 << endl ;
        else cout << 1 << endl ;
    } 
    else {
        if (b > a) cout << (b - a) << endl ;
        else {
            if (a % 2 == 0 and b % 2 == 1) cout << 1 << endl ;
            else if ( a % 2 == 1 and b % 2 == 0) cout << 1 << endl ;
            else cout << 0 << endl ;
        }
    }
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