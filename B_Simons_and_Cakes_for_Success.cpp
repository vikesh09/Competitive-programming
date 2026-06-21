#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
#define s string
using namespace std;

void solve(){
    ll n; cin>>n;
    ll k=1; ll temp=n;
    for(ll i=2; i*i<=temp;i++){
        if(temp%i==0){
            k*=i;
            while(temp%i==0){
                temp/=i;
            }
        }
    }
    if(temp>1){
        k*=temp;
    }
    cout<<k<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();

    }
    
}