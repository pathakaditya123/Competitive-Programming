#include <bits/stdc++.h>
using namespace std ;

void solve() 
{
    string a, b ;
    vector<int> frequency (26, 0) ;
    cin >> a >> b ;
    for(auto c : a) {frequency[c - 97] ++;} 
    for(auto c : b) {frequency[c - 97] --;}
    int ans = 0 ;
    for(auto x : frequency) {
        ans += abs(x) ;
    } 
    cout << ans << endl ;
}

int main()
{
    int testcases = 1;
    cin >> testcases ;
    while(testcases --)
    {
        solve() ;
    }
    return 0 ;   
}