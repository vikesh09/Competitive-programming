#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long x;
    cin >> x;

    long long d = 1 + 8 * x;
    long long s = sqrt(d);

    if (s * s == d)
        cout << "YES\n";
    else
        cout << "NO\n";
}
