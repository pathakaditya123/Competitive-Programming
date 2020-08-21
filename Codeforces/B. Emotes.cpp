// https://codeforces.com/problemset/problem/1117/B
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
   int n , m , k , first = 0 , second = 0 ;
   cin >> n >> m >> k ;
    int v[n];
   int maxx = -1 , second_maxx = -1 ; 
   for (int i = 0 ; i < n ; i++ )
   {
       cin >> v[i] ;
       if (v[i] > maxx) {
           maxx = v[i];
           first = i ; 
        }
   }
   for (int i = 0 ; i < n ; i++) {
       if (i == first) continue ;
       else  {
           if (v[i] > second_maxx) {
               second_maxx = v[i] ;
           }
       }
   }
   //cout << maxx << " " << second_maxx << endl ;
   cout << (m / (k + 1)) * second_maxx + (m - (m / (k + 1)) ) * maxx << endl ;
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
    return 0;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/
