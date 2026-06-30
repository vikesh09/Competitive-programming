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

void solve() {
 int n,m,k; cin>>n>>m>>k;
 vi b(n);
 vi c(m);
 for(int i=0;i<n;i++){
    cin>>b[i];
 }
 for(int i=0;i<m;i++){
    cin>>c[i];
 }
 int ans=0;
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(b[i]+c[j]<=k){
            ans++;
        }
    }
 }
 cout<<ans<<endl;
 
 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}