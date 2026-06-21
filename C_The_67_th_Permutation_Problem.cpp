#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;
void solve(){
  int n; 
  if(!(cin>>n)) return ;
  for(int i=1; i<=n;i++){
    int small=i;
    int median=n+ (2*i-1);
    int largest= n+ (2*i);
    cout<<small<<" "<<median<<" "<<largest<<(i==n?"":" ");
  }
  cout<<endl;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
    
}
