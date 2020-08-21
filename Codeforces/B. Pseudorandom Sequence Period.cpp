// https://codeforces.com/problemset/problem/172/B
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
        int a, b, m, r;
        cin >> a >> b >> m >> r;
        int count = 0;
        unordered_set<int> s;
        map<int, int> time;
        int prev = ((a % m * r % m) % m + b % m) % m;
        s.insert(prev);
        time[prev] = 0;
        int min_time = 999999;
        while (s.find(((a % m * prev % m) % m + b % m) % m) == s.end()) {
                count++;
                s.insert(((a % m * prev % m) % m + b % m) % m);
                prev = ((a % m * prev % m) % m + b % m) % m;
                time[prev] = count;
        }
        auto target = *s.find(((a % m * prev % m) % m + b % m) % m);
        cout << count - time[target] + 1 << endl;
}

int32_t main()
{
        //fast ;
        int testcases = 1;
        //cin >> testcases ;
        while (testcases--)
        {
                solve();
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