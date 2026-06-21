#include <iostream>
#include<vector>
#define ll long long

using namespace std;




void solve() {
    int n;
    if (!(cin >> n)) return;

    // Every positive integer x is a perfect root because sqrt(x^2) = x
    // We can simply print the first n positive integers.
    for (int i = 1; i <= n; ++i) {
        cout << i << (i == n ? "" : " ");
    }
    cout << endl;
}

int main() {
    // Optimization for faster I/O in competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}