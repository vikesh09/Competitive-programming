#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
using namespace std;

void solve(){
   ll n; cin>>n;
   if(n%2!=0){
    for(int i=0;i<n;i++){
        cout<<1<<(i==n-1?"":" ");
    }
   }
   else{
    cout<<1<<" "<<3<<" ";
    for(int i=0;i<n-2;i++){
        cout<<2<<(i==n-3?"":" ");
    }
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