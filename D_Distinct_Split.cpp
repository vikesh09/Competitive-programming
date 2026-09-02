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

using namespace std;

void solve() {
    int n; string s; cin >> n >> s;
    vi cnt(26, 0), p(26, 0);
    for(auto x: s) cnt[x - 'a']++;
    int ans = 0;
    for(auto x: s) {
        --cnt[x - 'a'];
        ++p[x - 'a'];
        int cur = 0;
        for(int i = 0; i < 26; ++i) {
            cur += min(1, cnt[i]) + min(1, p[i]);
        }
        ans = max(ans, cur);
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}