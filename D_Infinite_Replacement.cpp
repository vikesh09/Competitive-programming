#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
#define endl "\n"

using namespace std;

void solve(){
    string s, t; cin >>s>> t;

    if (t == "a") {
        cout << 1 << endl;
        return;
    }

    if (t.find('a') != string::npos) {
        cout << -1 << endl;
        return;
    }
    ll n = s.length();
    ll ans = 1LL << n; 
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while (t--){
        solve();
    }
    
}