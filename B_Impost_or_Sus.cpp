#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>
#include <limits>
#define ll long long
 
 
using namespace std;
 
void solve() {
    string r; cin >> r;
    
    for (char c : r) assert(c == 's' || c == 'u');
 
    ll n = r.length();
    const ll f = 1e9;
 
    
    vector<ll> dp(n + 1, f);
 
    
    ll prefix_u = 0;
    for (int i = 0; i < n; ++i) {
        int cost_to_reach_first_s = prefix_u + (r[i] == 'u' ? 1 : 0);
        dp[i + 1] = cost_to_reach_first_s;
        if (r[i] == 'u') prefix_u++;
    }
 
   
    ll ans = f;
 
    for (int i = 1; i <= n; ++i) {
        if (dp[i] == f) continue;
 
        
        if (i + 1 <= n) {
            int cost = (r[i] == 'u' ? 1 : 0);
            dp[i + 1] = min(dp[i + 1], dp[i] + cost);
        }
 
        
        if (i + 2 <= n) {
            int cost = (r[i] == 's' ? 1 : 0) + (r[i + 1] == 'u' ? 1 : 0);
            dp[i + 2] = min(dp[i + 2], dp[i] + cost);
        }
    }
 
    
    ll suffix_u = 0;
    for (int i = n; i >= 1; --i) {
        if (dp[i] != f) {
            ans = min(ans, dp[i] + suffix_u);
        }
        if (r[i - 1] == 'u') suffix_u++;
    }
 
    cout << ans << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    
    while (t--) {
        solve();
    }
    
}