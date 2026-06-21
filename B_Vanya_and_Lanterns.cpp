#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#include<set>
#include <iomanip>
#include<algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;

void solve(){
  ll n,l; cin>>n>>l;
  vl a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a.begin(),a.end());
  double ans=0;
  for(int i=1;i<n;i++){
    ans = max(ans, (a[i] - a[i-1]) / 2.0);
  }

  ans=max(ans,(double)a[0]);
  ans=max(ans, (double)(l - a[n-1]));
  cout<<fixed<<setprecision(10)<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
