#include <iostream>
#include<vector>

using namespace std;
using int64 = long long;

bool canReach(int64 k, int64 a, int64 b, int64 c, int64 x) {
    
    long double max_pos = (long double)k * a - (long double)(k / b) * c;
    return max_pos >= x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        int64 x;
        cin >> n >> x;

        const int64 INF = 1e18;
        int64 ans = INF;

        for (int i = 0; i < n; i++) {
            int64 a, b, c;
            cin >> a >> b >> c;

            if (a >= x) {
                ans = 0;
                continue;
            }

            if (b * a <= c) continue;

            
            int64 lo = 1, hi = (int64)2e18, best = -1;
            while (lo <= hi) {
                int64 mid = (lo + hi) / 2;
                if (canReach(mid, a, b, c, x)) {
                    best = mid;
                    hi = mid - 1;
                } else {
                    lo = mid + 1;
                }
            }

            if (best != -1) ans = min(ans, best / b);
        }

        if (ans == INF) cout << -1 << "\n";
        else cout << ans << "\n";
    }

    return 0;
}
