#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<numeric>  


#define ll long long
#define endl "\n"
#define vl vector <long long>
#define vi vector <int>

using namespace std;

void solve(){
    int n; cin>>n;
    vl a(n);
    ll total=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        total+=a[i];
    }
    ll ans = 1; ll pref=0;

    for(int i=0;i<n-1;i++){
        pref+=a[i];
        ans=max(ans,gcd(pref,total));
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