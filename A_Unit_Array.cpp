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
    int sum=0,p=1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        p*=a[i];
    }
    int ans=0;
    while(sum<0 || p==-1){
        sum+=2;
        p*=-1;
        ans++;
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