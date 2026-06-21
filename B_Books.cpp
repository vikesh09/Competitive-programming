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
  ll n,t; cin>>n>>t;
  vi a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int ans=0;int sum=0; int l=0;
  for(int i=0;i<n;i++){
    while( l<n &&sum +a[l]<=t ){
        sum+=a[l];
        l++;

    }
    ans=max(ans,l-i);
    sum-=a[i];

  }
  cout<<ans<<endl;


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
