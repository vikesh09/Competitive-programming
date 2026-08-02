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
	int n; ll x; cin>>n>>x;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll l=0,h=2'000'000'007;
    while(l<h){
        ll mid =l+(h-l+1)/2;
        ll tt=0;
        for(int i=0;i<n;i++){
            tt+=max(mid-a[i],0LL);
        }
        if(tt<=x){
            l=mid;
        }
        else{
            h=mid-1;
        }
    }
	cout<<l<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}