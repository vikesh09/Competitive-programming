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

void solve() {
    int n; cin>>n;
    vi a(n),b(n);
    for(auto&it:a){
        cin>>it;
    }
    for(auto&it:b){
        cin>>it;
    }
    int ma=*min_element(a.begin(),a.end());
    int mnb=*min_element(b.begin(),b.end());
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=max(a[i]-ma,b[i]-mnb);
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}