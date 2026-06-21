#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define endl "\n"

using namespace std;

void solve() {
    int n; cin >> n;
    
    vector<int> a(n);
    int max_val = 0;
    int max_idx = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > max_val){
            max_val = a[i];
            max_idx = i;
        }
    }

    swap(a[0], a[max_idx]);

    long long total_value = 0;
    int current_max = 0;
    for (int i = 0; i < n; ++i) {
        current_max = max(current_max, a[i]);
        total_value += current_max;
    }

    cout <<total_value<< endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
}