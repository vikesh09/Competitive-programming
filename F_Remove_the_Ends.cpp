#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // Calculate total absolute sums for prefixes and suffixes
    vector<ll> pref_abs(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pref_abs[i + 1] = pref_abs[i] + abs(a[i]);
    }

    vector<ll> suff_abs(n + 1, 0);
    for (int i = n - 1; i >= 0; i--) {
        suff_abs[i] = suff_abs[i + 1] + abs(a[i]);
    }

    ll max_coins = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            // Gain |a_i| and keep the rest of the suffix to the right
            max_coins = max(max_coins, suff_abs[i]);
        } else {
            // Gain |a_i| and keep the rest of the prefix to the left
            max_coins = max(max_coins, pref_abs[i + 1]);
        }
    }

    cout << max_coins << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}