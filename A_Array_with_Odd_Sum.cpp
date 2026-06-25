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
  vi a(n);
  int sum=0; 
  bool odd=false,even=false;
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
    odd |= a[i]%2!=0;
    even|=a[i]%2==0;
  }
  if((sum%2!=0)|| (odd && even)){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }

  
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}