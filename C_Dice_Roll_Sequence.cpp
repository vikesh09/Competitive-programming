#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

const int INF = 1e9;
using namespace std;

void solve(){
   int n; cin>>n;
   vi a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   vi dp(7,INF);
   for(int i=1;i<=6;i++){
    dp[i]=(i==a[0]?0:1);

   }

   for(int i=1;i<n;i++){
    vi n_dp(7,INF);

    for(int j=1;j<=6;j++){
        int cost = (j == a[i] ? 0 : 1);

        for (int k=1;k<=6;k++){
                if(k!=j&& k+ j!= 7){
                    n_dp[j] = min(n_dp[j], dp[k] + cost);
                }
            }

   }
   dp = n_dp;

   }
   int ans=INF;
   for(int i=1;i<=6;i++){
    ans=min(ans,dp[i]);
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