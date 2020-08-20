#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
	string t;
	cin >> t;

	int len = t.size();

	int start = ( len - 1 ) / 2;
	int end = start + 1;

	while ( start >= 0 || end < len )
	{	
		if ( start >= 0 )
		{
			cout << t [start--] ;
		}

		if( end < len )
		{
			cout << t [end++];
		}
	}
	cout << endl;
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