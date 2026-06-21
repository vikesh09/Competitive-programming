#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
#define endl "\n"

using namespace std;

void solve(){
    int n, k; cin>>n>>k;
    
    vector<ll> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    vector<ll> pref(n + 1, 0);
    for (int i = 0; i < n; i++){
        pref[i + 1] = pref[i] + a[i];
    }

    ll max_sum = 0;
    for (int i = 0; i <= k; i++){
        ll current_sum = pref[n - (k - i)] - pref[2 * i];
        max_sum = max(max_sum, current_sum);
    }
    cout << max_sum <<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
}