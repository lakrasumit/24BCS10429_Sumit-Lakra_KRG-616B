#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> p;
    int left = 1, right = n;
    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            p.push_back(left++);
        } else {
            p.push_back(right--);
        }
    }

    reverse(p.begin(), p.end());

    for (int i = 0; i < n; i++) {
        cout << p[i] << (i == n - 1 ? "" : " ");
    }
    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}