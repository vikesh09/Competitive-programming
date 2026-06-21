#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        ll total = 0;
        for (int i = 0; i + 1 < n; i++) {
            total += abs(a[i] - a[i + 1]);
        }
 
        ll max_gain = 0;
 
        
        max_gain = max(max_gain, (ll)abs(a[0] - a[1]));
 
        
        max_gain = max(max_gain, (ll)abs(a[n - 2] - a[n - 1]));
 
        
        for (int i = 1; i + 1 < n; i++) {
            ll gain =
                abs(a[i - 1] - a[i]) +
                abs(a[i] - a[i + 1]) -
                abs(a[i - 1] - a[i + 1]);
            max_gain = max(max_gain, gain);
        }
 
        cout << total - max_gain << "\n";
    }
    return 0;
}
