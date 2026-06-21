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
   for(int i=0;i<n;i++) cin>>a[i];
   int space=0; int ans=0;
   for(int i=0;i<n;i++){
    if(a[i]==0){
        space++;
    }
    else{
        ans=max(ans,space);
        space=0;
    }
   }
   cout<<max(ans,space)<<endl;

   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();

    }
    
}