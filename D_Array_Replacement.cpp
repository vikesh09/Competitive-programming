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
    vl d(n-1);
    for(int i=0;i<n-1;i++){
        d[i]=a[i+1]-a[i];
    }
    for(int i=0;i<n-1;){
        int j=i;
        while(j<n-1 && (d[j]&1)==(d[i]&1)){
            j++;
        }
        sort(d.begin()+i,d.begin()+j);
        i=j;
    }
    cout<<a[0]<<" ";
    ll cur=a[0];
    for(int i=0;i<n-1;i++){
        cur+=d[i];
        cout<<cur<<" ";
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