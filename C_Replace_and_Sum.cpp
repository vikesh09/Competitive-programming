#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<math.h>
#define ll long long 
#define endl "\n"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    
    while (t--) {
        int n, q; cin >> n >> q;
        

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        
        vector<int> maxValue(n);
        maxValue[n - 1] = max(a[n - 1], b[n - 1]);
        for (int i = n - 2; i >= 0; i--) {
            maxValue[i] = max({a[i], b[i], maxValue[i + 1]});
        }

        vector<long long> prefix(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            prefix[i] = prefix[i - 1] + maxValue[i - 1];
        }

        
        while (q--) {
            int l, r;
            cin >> l >> r;
            cout << prefix[r] - prefix[l - 1] << " ";
        }
        cout <<endl;
    }

    
}
