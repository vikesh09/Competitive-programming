#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <unordered_map>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve(){
    ll n; cin>>n;
    ll ans=0;
    for(ll i=1;i<=n;i=i*10+1){
        for(int j=1;j<=9;j++){
            if(i*j<=n){
                ans++;
            }
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