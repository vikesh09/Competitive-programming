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
  int n,k; cin>>n>>k;
  vi a(n);
  int cnt=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]+k <=5){
        cnt++;
    }
  }
  cout<<cnt/3<<endl;
  

  
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}