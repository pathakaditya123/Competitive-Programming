// http://codeforces.com/problemset/problem/1216/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    string a ,b ;
    cin >> a >> b ;
    map<char,char> mp ;
    for(int i = 0; i < 26 ; i++) {
        mp[a[i]] = b[i] ;
    }
    //for(auto x : mp ) cout << x.first << " " << x.second << endl ;
    
    string input , out ;
    cin >> input ;
    out = input ;

    transform(input.begin(), input.end(),input.begin(), ::tolower) ;
    for(int i = 0 ; i < input.size() ; i++) {
        if(input[i] >= 48 and input[i] <= 57) cout << input[i]  ;
        else
        {
            auto itr = mp.find(input[i]) ;
            if(out[i] >= 97) {
                cout << itr->second ;
            }
            else
            {
                char ch = itr->second ;
                cout << (char) ((ch) - 32) ;
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