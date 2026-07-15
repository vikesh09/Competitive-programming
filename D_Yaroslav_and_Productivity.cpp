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
    int n, m; cin>>n>>m;
    vl a(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    
    vector<bool> isBreak(n+1, false);
    for(int i = 0; i < m; i++){
        int b; cin >> b;
        isBreak[b] = true;
    }
    
    const ll NEG_INF = LLONG_MIN / 2;
    ll dp0 = 0, dp1 = NEG_INF;
    for(int i = n; i >= 1; i--){
        if(isBreak[i]){
            ll best = max(dp0, dp1);
            ll new0 = best + a[i];
            ll new1 = best - a[i];
            dp0 = new0;
            dp1 = new1;
        } 
        else{
            dp0 = dp0 + a[i];
            dp1 = dp1 - a[i];
        }
    }
    cout<<max(dp0, dp1)<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}