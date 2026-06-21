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
  int n; cin>>n;
  const int MAXA=100000;
  vl earn(MAXA+1,0);
  for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    earn[x]+=x;
  }
  vl dp(MAXA+1,0);
  dp[0]=0;
  dp[1]=earn[1];
  for(int i=2;i<=MAXA;i++){
    dp[i]=max(dp[i-1],dp[i-2]+earn[i]);
  }
  cout<<dp[MAXA]<<endl;

  
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}