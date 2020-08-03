// https://codeforces.com/problemset/problem/658/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , c , zero = 0 , Limak = 0 , Radewoosh = 0 , timer ;
    cin >> n >> c ;
    vector<int> score(n) , time(n) ;
    for(auto &x : score) cin >> x ;
    for(auto &x : time) cin >> x ;
    Limak += max(zero, (score[0] - (c * time[0]) )) ;
    timer = time[0] ;
    for(int i = 1 ; i < n  ; i++) {
        timer += time[i] ;
        Limak += max (zero, score[i] - (c * timer ) );
        
    }
    
    //cout << Limak << endl ;
    
    timer = time[n -1 ] ;
    Radewoosh += max (zero , (score[n -1] - (c * time [n -1]))) ;
    for(int i = n -2 ; i >= 0 ; i--) {
        timer += time[i] ;
        Radewoosh +=  max (zero, score[i] - (c * timer ) ) ;
    }

    //cout << Radewoosh << endl ;
    if (Limak > Radewoosh) cout << "Limak" << endl ;
    else if (Limak < Radewoosh) cout << "Radewoosh" << endl ;
    else cout << "Tie" << endl ;
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