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
int ans(int n){
    while(n>0 && n%2==0){
        n/=2;
    }
    return n;
}
void solve(){
    ll n; cin>>n;
    vi a(n+1);
    bool found=true;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(ans(i)!=ans(a[i])){
            found=false;
        }
    }
    if(found) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
    
}