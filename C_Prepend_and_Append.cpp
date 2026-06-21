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
  int n; cin>>n;
  string s; cin>>s;
  int l=0; int r=n-1; int ans=n;
  while(s[l]!=s[r] && ans>0){
    l++;
    r--;
    ans-=2;
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
