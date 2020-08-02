// https://codeforces.com/problemset/problem/302/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n, m;
	cin >> n >> m;
		
	vector<int> v(n);
	int count_1 = 0;
	int count__1 = 0;
	for (auto & x : v) {
		cin >> x;
		if (x == -1) count__1++;
		if (x == 1) count_1++;
	}
	
	while (m--) {
		int l, r;
		cin >> l >> r;
		int sum = 0;
			
		if ((r - l + 1) % 2 != 0) {
			cout << 0 << endl;
		}
        else {
			if (count__1 >= (r - l + 1) / 2 && count_1 >= (r - l + 1) / 2) {
				cout << 1 << endl;
			}
            else {
				cout << 0 << endl;
			}
		}
	}
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