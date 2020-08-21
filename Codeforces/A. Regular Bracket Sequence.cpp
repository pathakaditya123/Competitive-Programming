// https://codeforces.com/problemset/problem/1132/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (c >= 1) (a >= 1 && d >= 1) ? cout << (a == d ? 1 : 0) << endl : cout << 0 << endl;
        else cout << (a == d ? 1 : 0) << endl;
}
int32_t main()
{
        //fast ;
        int testcases = 1;
        //cin >> testcases ;
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