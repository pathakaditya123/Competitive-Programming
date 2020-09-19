// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
        char ch ;
        cin >> ch ;
        string a , b ;
        cin >> a >> b ;
        char level[] = {'6' , '7' , '8', '9', 'T', 'J', 'Q', 'K', 'A'} ;
        int _1 , _2 ;
        for (int i = 0 ; i < 9; i++ )
        {
                if (a[0] == level[i]) {
                        _1 = i ;
                        break ;
                }
        }
        for (int i = 0 ; i < 9 ; i++ )
        {
                if (b[0] == level[i]) {
                        _2 = i ;
                        break ;
                }
        }
        //cout << _1 << " " << _2 << endl ;
        if (_1 <= _2) cout << "NO" << endl ;
        else cout << "YES" << endl ;
}

int32_t main()
{
        fast ;
        int testcases = 1 ;
        // cin >> testcases ;
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
