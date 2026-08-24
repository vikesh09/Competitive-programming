#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<numeric>
#include<unordered_map>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    vi a(n + 1);
    vl pref(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
    }

    for (int i = 0; i < q; i++) {
        long long l, r, k;
        cin >> l >> r >> k;
        long long ans = pref[n] - (pref[r] - pref[l - 1])
                        + k * (r - l + 1);

        if (ans % 2 == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
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