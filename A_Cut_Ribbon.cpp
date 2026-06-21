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
  int n,a,b,c; cin>>n>>a>>b>>c;
  int ans=0;
  for(int i=0;i<=n/a;i++){
    for(int j=0;j<=n/b;j++){
        int used = (i * a + j * b);
        if(used<=n && (n-used)%c==0){
            int k=(n-used)/c;
            ans=max(ans,i+j+k);
        }
        
    }
  }
  cout<<ans<<endl;
   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
   
}