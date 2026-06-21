#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve() {
   ll a,b,x; cin>>a>>b>>x;
   vector<pair<ll,ll>> va;
   vector<pair<ll,ll>>vb;
   ll cur=a;
   ll cur1=b;
   ll cost2=0;
   ll cost=0;
   while(true){
    va.push_back({cur,cost});
    if(cur==0) break;
    cur/=x;
    cost++;
   }
   while(true){
    vb.push_back({cur1,cost2});
    if(cur1==0) break;
    cur1/=x;
    cost2++;
   }
   ll ans=LLONG_MAX;;
   for(int i=0;i<va.size();i++){
    for(int j=0;j<vb.size();j++){
        ans=min(ans,(va[i].second+vb[j].second + abs(va[i].first-vb[j].first)));
        
    }
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