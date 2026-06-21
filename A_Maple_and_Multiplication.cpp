#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (a == b) {
            cout << 0 << '\n';
        } else {
            long long mn = min(a, b);
            long long mx = max(a, b);
            if (mx % mn == 0) cout << 1 << '\n';
            else cout << 2 << '\n';
        }
    }
    return 0;
}
