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
	ll m,a,b,c; cin>>m>>a>>b>>c;
    ll r1= min(m,a);
    ll r2=min(m,b);
    ll rm= (m-r1)+(m-r2);
    ll r3=min(c,rm);
    cout<<r1+r2+r3<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}