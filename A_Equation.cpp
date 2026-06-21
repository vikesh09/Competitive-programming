#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    if (!(cin >> n)) return 0;
    if (n % 2 == 0) {
        cout << n + 4 << " " << 4 << "\n";
    } else {
        cout << n + 9 << " " << 9 << "\n";
    }
    return 0;
}
