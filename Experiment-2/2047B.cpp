#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, min1 = INT_MAX, max1 = INT_MIN;
    char maxChar, minChar;
    cin >> n;

    string a;
    cin >> a;

    map<char, int> mapp;

    for (int i = 0; i < n; i++) {
        mapp[a[i]]++;
    }

    if (mapp.size() == 1) {
        cout << a << "\n";
        return;
    }

    for (auto it : mapp) {
        if (it.second < min1) {
            min1 = it.second;
            minChar = it.first;
        }
        if (it.second > max1) {
            max1 = it.second;
            maxChar = it.first;
        }
    }

    if (minChar == maxChar) {
        for (int i = 0; i < n; i++) {
            if (a[i] != minChar) {
                a[i] = maxChar;
                cout << a << endl;
                return;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == minChar) {
            a[i] = maxChar;
            break;
        }
    }

    cout << a << endl;

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}