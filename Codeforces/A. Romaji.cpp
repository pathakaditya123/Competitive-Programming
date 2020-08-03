// https://codeforces.com/problemset/problem/1008/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

bool isVowel (char ch) {
    if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u') return true ;
    else return false ;
}

void solve()
{
    int flag = 0 ;
    string str ;
    cin >> str ;
    // if(isVowel(str[str.size() - 1]) or str[str.size() - 1] == 'n') cout << "YES" << endl ;
    // else cout << "NO" << endl ; 
    for(int i = 0 ; i < str.size() ; i++) {
        if(str[i] == 'n') {
            if(isVowel(str[i + 1])) i++ ;
        }
        else if(!isVowel(str[i])) {
            if(isVowel(str[i+1])) i++ ;
            else
            {
                flag = 1 ;
                break ;
            }
            
        }
    }
    if(flag) cout << "NO" << endl ;
    else cout << "YES" << endl ;
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