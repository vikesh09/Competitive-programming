#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long k, n, w;
    cin >> k >> n >> w;

    long long count = 0;

    for (long long i = 1; i <= w; i++) {
        count += i * k;
    }

    if (count > n)
        cout << (count - n);
    else
        cout << 0;
}
