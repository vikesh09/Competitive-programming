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
  string s; cin>>s;
  int z=0,a=0;
  for(char c:s){
    if(c=='0') z++;
    else a++;
  }
  int m=min(z,a);
  if(m%2){
    cout<<"DA"<<endl;
  }
  else{
    cout<<"NET"<<endl;
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