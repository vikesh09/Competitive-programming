#include <iostream>
#include<cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        cout << (n / 15) * 3 + min(n % 15 + 1, 3LL) << "\n";
    }
    return 0;
}
