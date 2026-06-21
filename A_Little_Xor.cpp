#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>

using namespace std;

void solve(){
   int n; cin>>n;
   vi ans(n);
   for(int i=0;i<n;i++){
    cin>>ans[i];
   }
   int t=0;
   for(int i=0;i<n;i++){
    int xr=0;
    for(int j=i;j<n;j++){
        xr^=ans[j];
        t=max(t,xr);
    }
    

   }
   cout<<t<<endl;


   
    
   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
