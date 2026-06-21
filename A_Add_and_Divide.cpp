#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>


using namespace std;
void solve(){
    ll a,b; cin>>a>>b;
    int ans=1e9;
    for(int add=0; add<=30;add++){
        ll n_b= b+add;
        if(n_b==1) continue;
        ll temp=a;
        int cnt=add;
        while(temp>0){
            temp/=n_b;
            cnt++;
        }
        ans=min(ans,cnt);
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