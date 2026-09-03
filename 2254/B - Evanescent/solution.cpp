#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    vector<pair<char, int>> b;
    for (int i = 0; i < n; i++) {
        if (b.empty() || b.back().first != s[i]) {
            b.push_back({s[i], 1});
        } else {
            b.back().second++;
        }
    }
 
    int ans = b.size();
    int red = 0;
    int idx = 0;
 
    for (int i = 0; i < b.size(); i++) {
        int len = b[i].second;
        if (len > 1) {
            int L = max(1, idx);
            int R = min(n - 2, idx + len - 1);
            if (L <= R) {
                red = max(red, 0);
            }
        } else {
            if (idx > 0 && idx < n - 1) {
                int cur = 1;
                if (i > 0 && i < b.size() - 1 && b[i - 1].first == b[i + 1].first) {
                    cur = 2;
                }
                red = max(red, cur);
            }
        }
        idx += len;
    }
 
    cout << ans - red << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}