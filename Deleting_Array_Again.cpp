#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N), C(N);
        for (int i = 0; i < N; i++) cin >> A[i];
        for (int i = 0; i < N; i++) cin >> C[i];

        long long ans = 0;
        int minC = INT_MAX;

        for (int i = 0; i < N; i++) {
            minC = min(minC, C[i]);   
            ans += (long long)A[i] * minC;
        }

        cout << ans << "\n";
    }
    return 0;
}
