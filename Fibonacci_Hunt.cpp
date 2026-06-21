#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>


using namespace std;

void solve(){
    ll k; cin>>k;
    vl f = {1, 1};
    while(f.back() < k){
        f.push_back(f.end()[-1] + f.end()[-2]);
    }
    int ans = 0;
    for(int i = f.size()-1; i >= 0; i--){
        if(f[i] <= k) {
            k -= f[i];
            ans++;
        }

    }
    cout<<ans<<endl;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        solve();
    }
}