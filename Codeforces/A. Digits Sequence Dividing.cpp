// https://codeforces.com/problemset/problem/1107/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    int testcases ;
    cin >> testcases ;
    while (testcases--)
    {
        int n ;
        cin >> n ;
        string s ;
        cin >> s ;
        if(n == 2) {
            int a = (s[0] - 48) ;
            int b = (s[1] - 48) ;
            if(b <= a) cout << "NO" << endl ;
            else 
            {
                cout << "YES" << endl << 2 << endl ;
                cout << a << " " << b << endl ;
            }
        }
        else
        {
            cout << "YES" << endl ;
            cout << 2 << endl ;
            cout << s[0] << " ";
            for(int i = 1 ; i < n ; i++) cout << s[i] ;
            cout << endl ;
        }
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