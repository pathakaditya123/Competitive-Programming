// https://codeforces.com/problemset/problem/175/B
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
        map<string, pair<string, int>> best;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
                string name;
                int score;
                cin >> name >> score;
                best[name].second = max(best[name].second, score);
        }
        for (auto itr = best.begin(); itr != best.end(); itr++) {
                int count = 0;
                for (auto i = best.begin(); i != best.end(); i++) {
                        if (itr->second.second >= i->second.second) count++;
                }
                double percent = ((double)count / best.size() * 1.0) * 100.0;
                if (percent < 50.0) itr->second.first = "noob";
                else if (percent >= 50.0 && percent < 80.0) itr->second.first = "random";
                else if (percent >= 80.0 && percent < 90.0) itr->second.first = "average";
                else if (percent >= 90.0 && percent < 99.0) itr->second.first = "hardcore";
                else itr->second.first = "pro";
        }
        cout << best.size() << endl;
        for (auto x : best) {
                cout << x.first << " " << x.second.first << endl;
        }
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