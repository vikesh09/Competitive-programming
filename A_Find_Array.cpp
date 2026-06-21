#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
using namespace std;

void solve(){
   int n; cin >> n;
   cout<<2<<" "; 
   for(int i=1;i<n;i++){
    cout<<(2*i+1)<<" ";
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