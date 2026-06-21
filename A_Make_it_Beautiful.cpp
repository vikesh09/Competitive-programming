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
   ll n; cin>>n;
   vi a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   sort(a.begin(),a.end());
   ll maxn= a[n-1];
   ll mini= a[0];
   if(maxn==mini){
    cout<<"NO"<<endl;
   }
   else{
    cout<<"YES"<<endl;
    cout<<maxn<<" ";
    for(int i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

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
