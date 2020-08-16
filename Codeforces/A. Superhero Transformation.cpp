#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
	if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u') return true ;
	else return false ;
}

bool isConsonant (char ch) {
	if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u') return false ;
	else return true ;
}

int main() {
	string s , t ;
	cin >> s >> t ;
	int flag = 0 ;
	int n = s.size() ;
	int m = t.size() ;
	if(n != m ) cout << "NO" << endl ;
	else {
		for(int i = 0 ; i < n ; i++) {
			if (isVowel(s[i])) s[i] = 'a' ;
			if (isConsonant(s[i])) s[i] = 'b' ;
			if (isVowel(t[i])) t[i] = 'a' ;
			if (isConsonant(t[i])) t[i] = 'b' ;
		}
		if(s == t) cout << "YES" << endl ;
		else cout << "NO" << endl ;
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