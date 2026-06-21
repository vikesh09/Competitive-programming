#include<iostream>
#include<string>
#include<algorithm>

#define ll long long
using namespace std;
void solve(){
    ll a,b; cin>>a>>b;
    if(a%b==0) cout<<0<<"\n";
    else cout<<(b-a%b)<<"\n";
    
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        solve();
    }
}