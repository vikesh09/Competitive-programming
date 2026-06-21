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
   vl a(7);
   for(int i=0;i<7;i++) cin>>a[i];
   ll sum=0;
   for(int i=0;i<7;i++){
    sum+=a[i];
   }
   ll maxe= *max_element(a.begin(),a.end());
   cout<<((2*maxe)-sum)<<endl;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
    
}
