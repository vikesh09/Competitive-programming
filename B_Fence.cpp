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
    int n,k; cin>>n>>k;
    vi h(n);
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    ll sum=0;
    for(int i=0;i<k;i++){
        sum+=h[i];
    }
    ll mn=sum;
    int ans=1;
    for(int i=k;i<n;i++){
        sum+=h[i];
        sum-=h[i-k];
        if(sum<mn){
            mn=sum;
            ans=i-k+2;
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}