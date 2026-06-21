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
  ll n, c, k; 
   cin >> n >> c >> k;
   vl a(n);
   for(int i = 0; i < n; i++) cin >> a[i];
   
   sort(a.begin(), a.end());
   
   for(int i = 0; i < n; i++){
       if(a[i] <= c){
           ll use = min(k, c - a[i]);
           c += (a[i] + use);
           k -= use;
       } 
       else{
           break;
       }
   }
   cout<<c<<endl;

    
}




int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
    
    
    
}
