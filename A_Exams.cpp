#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int resits = max(0, 2*n - k);
    cout << resits << endl;

    return 0;
}
