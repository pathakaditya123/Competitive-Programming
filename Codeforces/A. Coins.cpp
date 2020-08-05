    // https://codeforces.com/problemset/problem/618/A
    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
    #define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    #define endl '\n'
     
    void solve()
    {
        int n , s ; 
        cin >> s >> n ;
        if (n % s == 0 ) cout << n / s << endl ;
        else cout << ( n / s ) + 1 << endl ; 
    }
     
    int32_t main()
    {
        fast;
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