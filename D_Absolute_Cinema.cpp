#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

const int INF = 1e9;
using namespace std;

void solve(){
    ll n; cin>>n;
    vl f(n+1);
    for(int i=1;i<=n;i++){
        cin>>f[i];
    }
    vl a(n+1);
    ll t_sum=(f[1]+f[n])/(n-1);
    for(int i=2;i<n;i++){
        a[i]=(f[i+1]+f[i-1]-2*f[i])/2;
    }

    a[1]=(f[2] - f[1] + t_sum)/2;
    a[n]=(t_sum - (f[n] - f[n - 1]))/2;
    for(int i=1;i<=n;i++){
        cout<<(a[i])<<(i==n?"":" ");
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