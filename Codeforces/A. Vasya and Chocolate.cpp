    // https://codeforces.com/problemset/problem/618/A
    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
    #define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    #define endl '\n'
     
    void solve()
    {
        int s , a , b , c ;
        cin >> s >> a >> b >> c ;
        int ans , r ;
        ans = (s / c) ;
        r = (ans / a) * b ;
        cout << ans + r << endl ; 
    }
     
    int32_t main()
    {
        fast;
        int testcases = 1 ;
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