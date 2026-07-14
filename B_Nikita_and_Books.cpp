#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <unordered_map>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve(){
    int n; cin>>n;
    vl a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll c=0,p=0;
    for(int i=0;i<n;i++){
        ll cur=a[i]+c;
        ll need=p+1;
        if(cur<need){
            cout<<"NO"<<endl;
            return;
        }
        c=cur-need;
        p=need;
    }
    cout<<"YES"<<endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}