#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <numeric>
#include <unordered_map>
#include <queue>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve(){
    int n,q; cin>>n>>q;
    string s; cin>>s;
    vi mis0(n+1,0), mis1(n+1,0);
    for (int i = 1; i <= n; i++) {
        char c = s[i-1];
        char expected0 = (i % 2 != 0) ? '0' : '1'; 
        char expected1 = (i % 2 != 0) ? '1' : '0'; 
        mis0[i] = (c != expected0);
        mis1[i] = (c != expected1);
    }
    vi pref0(n+1,0), pref1(n+1,0);
    for (int i = 1; i <= n; i++) {
        int st0 = mis0[i] && (i==1 || !mis0[i-1]);
        int st1 = mis1[i] && (i==1 || !mis1[i-1]);
        pref0[i] = pref0[i-1] + st0;
        pref1[i] = pref1[i-1] + st1;
    }
    while (q--) {
        int l, r, k; cin >> l >> r >> k;
        
        int blocks0 = mis0[l] + (pref0[r] - pref0[l]);
        int blocks1 = mis1[l] + (pref1[r] - pref1[l]);

        int min_ops = min(blocks0, blocks1);
        cout << (min_ops <= k ? "YES" : "NO") << "\n";
    }

   
    
   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}