// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long
#define endl "\n"

bool isPalindrome(string s) {
        string t = s ;
        reverse(s.begin() , s.end()) ;
        if (s == t) return true ;
        else return false ;
}

void solve()
{
	int k ;
        string s ;
        cin >> s >> k ;
        int n = s.size() ;
        if (s.size() % k != 0) cout << "NO" << endl ;
        else if (s.size() == k) {
                cout << "YES" << endl ;
        }
        else {
                int size = (n / k) ;
                vector<string> str(size) ;
                int j = 0 ;
                for (int i = 0 ; i < n ; i++) {
                        while(size--) {
                                str[j] += s[i] ;
                                i++ ; 
                        }
                        i--;
                        size = (n / k) ;
                        j++ ;
                }
                for (int i = 0; i < size ; i++) {
                        if (!(isPalindrome(str[i]))) {
                                cout << "NO" << endl ;
                                return ;
                        } 
                }
                cout << "YES" << endl ;
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
