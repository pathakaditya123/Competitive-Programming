#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
 
void solve()
{
    int n , k ;
    cin >> n >> k ;
    vector<int> v(n) ;
    vector <int> v2;
    int maxx = -99999999999999999 ;
    for (int i = 0 ; i < n ; i++ )
    {
        cin >> v[i] ;
        if (v[i] > maxx) maxx = v[i] ;
    }
    if ( k % 2 != 0) 
    {
        for(int i = 0 ; i < n ; i++) {
        cout << abs(v[i] - maxx) << " ";
        }
        cout << endl ;
    }
    else if ( k % 2 == 0) {
        for(int i = 0 ; i < n ; i++) {
            v2.push_back(abs (v[i] - maxx) );
        }
        int m = *max_element(v2.begin() , v2.end()) ;
        for(int i = 0 ; i < n ; i++) {
            cout << abs(v2[i] - m) << " ";
        }
        cout << endl ;
    }
}
int32_t main()
{
    fast ;
    int testcases = 1 ;
    cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0 ;
}