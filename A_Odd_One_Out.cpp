#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define s string
using namespace std;

void solve(){
    int a,b,c; cin>>a>>b>>c;
    if(a==b) cout<<c<<endl;
    else if(b==c) cout<<a<<endl;
    else cout<<b<<endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
    
}