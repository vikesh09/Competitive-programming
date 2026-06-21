#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<char> digits;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '+') {
            digits.push_back(s[i]);
        }
    }

    sort(digits.begin(), digits.end());
    for (int i = 0; i < digits.size(); i++) {
        cout << digits[i];
        if (i != digits.size() - 1) {
            cout << "+";
        }
    }

    return 0;
}