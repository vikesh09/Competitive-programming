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
  vi a(n+1,0);
  for(int i=0;i<n;i++){
    int x; cin>>x;
    a[x]++;
  }
  for(int i=1;i<=n;i++){
    if(a[i]>=3){
        cout<<i<<endl;
        return;
    }
  }
  cout<<(-1)<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}