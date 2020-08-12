// http://codeforces.com/problemset/problem/1300/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
    
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
    
void solve()
{
    int n , sum = 0 , countZero = 0 , prod = 1 ;
    cin >> n ;
    vector<int> v(n) ;
    for(auto &x : v) {
        cin >> x ;
        if(x == 0) countZero++ ;
        sum += x ;
        prod *= x ;
    }
    if (prod == 0 and sum == 0) {
        prod = 1 , sum = 0; 
        for(int i = 0 ; i < n ; i++) {
            if (v[i] == 0 ) v[i] = 1 ;
            prod *= v[i] ;
            sum  += v[i] ;
        }
        if (sum == 0) cout << countZero + 1 << endl ;
        else cout << countZero << endl ;
    }
    else if (prod != 0 and sum == 0) cout << 1 << endl ;
    else if (prod == 0 and sum != 0) {
        prod = 1 , sum = 0; 
        for(int i = 0 ; i < n ; i++) {
            if (v[i] == 0 ) v[i] = 1 ;
            prod *= v[i] ;
            sum  += v[i] ;
        }
        if (sum == 0) cout << countZero + 1 << endl ;
        else cout << countZero << endl ;
    }
    else if (prod != 0 and sum != 0) cout << 0 << endl ; 
}
    
int32_t main()
{
    fast ;
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