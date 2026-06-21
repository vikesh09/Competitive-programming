#include <iostream>
#include <vector>
#include <set>
using namespace std;

// Function to compute maximum MEX
int max_mex(vector<int>& a) {
    set<int> s(a.begin(), a.end()); // distinct elements
    int mex = 0;

    // Keep incrementing mex while it exists in the set
    while (s.count(mex)) mex++;

    return mex;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        set<int> distinct(a.begin(), a.end());

        // We can pick x to shift array so that some number becomes 0
        // Then the maximum possible MEX = size of array with consecutive numbers starting from 0
        int answer = 0;

        // Try to shift all numbers so minimum becomes 0
        int min_a = *min_element(a.begin(), a.end());
        vector<int> shifted(n);
        for (int i = 0; i < n; ++i) shifted[i] = a[i] - min_a;

        // Count maximum consecutive non-negative integers from 0
        set<int> shifted_set(shifted.begin(), shifted.end());
        int mex = 0;
        while (shifted_set.count(mex)) mex++;

        cout << mex << "\n";
    }

    return 0;
}
