// https://codeforces.com/problemset/problem/629/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , counter = 0 ;
    cin >> n ;
    char cake [n][n] ;
    for (int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            cin >> cake[i][j] ;
        }
    }
    
    for (int i = 0 ; i < n ; i++) 
    {
        for (int j = 0 ; j < n ; j++) 
        {
            for (int l = j + 1 ; l < n ; l++) 
            {
                if(cake[i][j] == 'C' and cake[i][l] == 'C') counter++ ;
                if(cake[j][i] == 'C' and cake[l][i] == 'C') counter++ ;
            }
        }
    }
    cout << counter << endl ;
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