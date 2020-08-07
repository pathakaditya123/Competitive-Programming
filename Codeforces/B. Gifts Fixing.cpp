#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
bool checkDone(vector<int> &A) {
    set<int> s(A.begin(), A.end());
    if (s.size() > 1) return false;
    else return true;
}
    
void solve()
{
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n);
    int min_A = 9999999999;
    int min_B = 9999999999;
    for (auto &x : A) {
        cin >> x;
        min_A = min(min_A, x);
    }
    for (auto &x : B) {
        cin >> x;
        min_B = min(min_B, x);
    }
    int count = 0;
    
    while (checkDone(A) == false || checkDone(B) == false) {
        for (int i = 0; i < n; i++) {
            if (A[i] > min_A && B[i] > min_B) {
                // cout << "A" << endl;
                int temp = min(abs(min_A - A[i]), abs(min_B - B[i])); 
                count += temp;
                A[i] -= temp;
                B[i] -= temp;
                } 
            else if (A[i] > min_A) {
                // cout << "B" << endl;
                count += abs(min_A - A[i]);
                A[i] -= abs(min_A - A[i]);
            } 
            else if (B[i] > min_B) {
                // cout << "C" << endl;
                count += abs(min_B - B[i]);
                B[i] -= abs(min_B - B[i]);
            }
        }
    }
    cout << count << endl;
}
    
int32_t main()
{
    fast ;
    int testcases = 1 ;
    cin >> testcases ;
    while(testcases--)
    {
        solve() ;
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