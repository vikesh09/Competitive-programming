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
    ll a,b,n; cin>>a>>b>>n;
    vl x(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
    } 
    ll ans=b;
    for(int i=0;i<n;i++){
        ans+=min(x[i],a-1);
    }
    cout<<ans<<endl;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}