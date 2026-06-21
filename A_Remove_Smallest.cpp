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
  int n; cin>>n;
  vi a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a.begin(),a.end());
  bool found= true;
  for(int i=1;i<n;i++){
    found&=((a[i]-a[i-1])<=1);
    
  }
  if(found) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();

    }
    
}