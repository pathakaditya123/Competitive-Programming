// http://codeforces.com/problemset/problem/411/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    string str ;
    cin >> str ;
    int _cap = 0 , _small = 0 , _digit = 0 ; 
    for(int i = 0 ; i < str.size() ; i++) {
        if(str[i] >= 48 and str[i] <= 57) _digit++ ;
        else if (str[i] >= 97 and str[i] <= 122) _small++ ;
        else if (str[i] >= 65 and str[i] <= 90) _cap++ ;
    }

    if ( str.size() >= 5 and _cap >= 1 and  _small >= 1 and  _digit >= 1 ) cout << "Correct" << endl ;
    else cout << "Too weak" << endl ;

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