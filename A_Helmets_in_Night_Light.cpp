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
    int n,p; cin>>n>>p;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back({0,x});
    }
    for(int i=0;i<n;i++){
        cin>>v[i].first;
    }
    sort(v.begin(),v.end());
    ll ans=p; int info=1;
    for(auto it:v){
        int b=it.first;
        int a=it.second;
        if(info==n){
            break;
        }
        if(b>=p){
            break;
        }
        int take=min(a,n-info);
        ans+=1LL*take*b;
        info+=take;
    }
    if(info<n){
        ans+=1LL*(n-info)*p;
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