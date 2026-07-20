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

void solve(){
    int n; cin>>n;
    vi a(n);
    int mn=INT_MAX, ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mn=min(mn,a[i]);
    }
    for(int i=0;i<n;i++){
        ans+=a[i]-mn;
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