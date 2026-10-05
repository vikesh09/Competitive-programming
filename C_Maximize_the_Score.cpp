#include<iostream>
#include<algorithm>
#include<vector>

#define ll long long
#define vi vector<int>
#define endl "\n"
#define vl vector<long long>

using namespace std;

void solve(){
    int n; cin>>n;
    vi a(2*n+1),first(n+1,0);
    vl dp(2*n+1,0);
    for(int i=1;i<=2*n;i++){
        cin>>a[i];
        dp[i]=dp[i-1]+1;
        if(!first[a[i]]){
            first[a[i]]=i;
        }
        else{
            int l=first[a[i]];
            ll len=i-l+1;
            dp[i]=max(dp[i],dp[l-1]+len*len);
        }   
    }
    cout<<dp[2*n]<<endl;
    

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}