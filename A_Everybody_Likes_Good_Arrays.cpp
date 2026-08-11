#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <numeric>
#include <unordered_map>
#include <queue>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve() {
    int n; cin>>n;
    vi a(n);
    for(auto&it: a){
        cin>>it;
    }
    int  ans=0;
    for(int i=0;i<n-1;i++){
        if(a[i]%2== a[i+1]%2){
            ans++;
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--) solve();
}