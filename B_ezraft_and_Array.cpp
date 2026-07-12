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
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n == 2){
        cout<<-1<<endl;
        return;
    }
    vl a={1,2,3};
    ll sum=6;
    while((int)a.size()<n){
        a.push_back(sum);
        sum*=2;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<(i==n-1?"":" ");
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