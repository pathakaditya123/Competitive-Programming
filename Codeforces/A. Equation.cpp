#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isPrime(int n) {
     bool flag = false ;
     for(int i = 2 ; i <= sqrt(n) ; i++) {
             if (n % i == 0) {
                     flag = true ;
                     break ;
             }
     }
     if (flag) return false ;
     else return true ;
}
int32_t main() {
        int n ;
        cin >> n ;
        if ( isPrime (n + 20) ) {
                cout << n + 20 + 1 << " " << 21 << endl ;
        }
        else cout << n + 20 << " " << 20 << endl ;
        return 0 ;        
}
// Coded by Aayush 