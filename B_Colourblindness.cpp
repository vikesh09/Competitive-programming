#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve() {
 int n; cin>>n;
 string s,r; cin>>s>>r;
 for(int i=0;i<n;i++){
    if(s[i]=='G') s[i]='B';
    if(r[i]=='G') r[i]='B';
 }
 if(s==r){
    cout<<"YES"<<endl;
 }
 else{
    cout<<"NO"<<endl;
 }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}