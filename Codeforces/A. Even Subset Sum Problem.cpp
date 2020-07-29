// https://codeforces.com/problemset/problem/1323/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    vector<int> v (n) ;
    for(auto &x : v) cin >> x ;
    int sum = 0 , flag = 0;
    vector<int> index ;
    for(int i = 0 ; i < n ; i++)
    {
        sum += v[i] ;
        if(v[i] % 2 == 0) {
            flag = 1 ;
            cout << i + 1 << endl ;
        }        
        else
        {
            if (v [i + 1 ] % 2 == 0) {
                sum = 0 ;
                index.clear() ;
            }
            else
            {
                index.push_back(i + 1) ;
            }
            
        }
    }
    if (flag == 0 ) cout << -1 << endl ;
}

int32_t main()
{
    int testcases ;
    cin >> testcases ;
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