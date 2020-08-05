    // https://codeforces.com/problemset/problem/1075/A
     
    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
    #define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    #define endl '\n'
     
    void solve()
    {
        int n ;
        cin >> n ;
        int dx, dy ;
        cin >> dx >> dy ;
        int white , black ;
        white = max(dx, dy) - 1 ;
        black = abs (min(dx, dy) - n) ;
        //cout << white << " " << black << endl ;
        if(white <= black) cout << "White" << endl ;
        else cout << "Black" << endl ;
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