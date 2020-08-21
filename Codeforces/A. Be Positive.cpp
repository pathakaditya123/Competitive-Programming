// https://codeforces.com/problemset/problem/1130/A
#include <bits/stdc++.h>
using namespace std ;
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long
 
void solve() {
    int n, x, zero = 0, pos = 0, neg = 0;
    cin >> n;
    x = n;
 
    while(n--){
        int x;
        cin >> x;
 
        if(x == 0) zero++;
        if(x > 0) pos++;
        if(x < 0) neg++;
    }
 
    if(x & 1){
 
        if(pos > x / 2) {
            cout << 1; 
        }
        else if(neg > x / 2) {
            cout << -1;
        }
        else {
            cout << 0;  
        }
    }
    else {
        if(pos >= x / 2) {
            cout << 1; 
        }
        else if(neg >= x / 2) {
            cout << -1;
        }
        else {
            cout << 0;  
        }
    }
}
 
int32_t main() {
    int testcases = 1 ;
    //cin >> testcases ;
    while (testcases--)
    {
        solve();
    }
    
    return 0 ;
}