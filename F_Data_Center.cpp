#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;

    int ans = INT_MAX;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            int a = i;
            int b = n / i;
            ans = min(ans, 2 * (a + b));
        }
    }

    cout << ans << endl;
    return 0;
}
