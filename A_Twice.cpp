#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<numeric>
#include<unordered_map>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve(){
    int n; cin>>n;
    vi a(n);
    int cnt=0;
    unordered_map<int,int>f;
    for(int i=0;i<n;i++){
        cin>>a[i];
        f[a[i]]++;
    }
    for(auto&it:f){
        cnt+=it.second/2;
        
    }
    cout<<cnt<<endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}