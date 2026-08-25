#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<numeric>
#include<unordered_map>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
#define  all(v)  v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define            pb                push_back
#define          sz(a)               (int)a.size()
 

using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];    
    sort(all(a));
    int cnt = 1, ans = 1;
    for(int i = 1; i < n; ++i) {
        if(a[i] - a[i - 1] > k) {
            cnt = 1;
        } else {
            ++cnt;
        }
        ans = max(ans, cnt);
    }
    cout << n - ans <<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}