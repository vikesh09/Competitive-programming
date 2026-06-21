#include <iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#define ll long long
#define endl "\n"

using namespace std;

void solve(){
    ll n; cin >> n;

    if(n % 2 != 0){
        cout << -1 << endl;
        return;
    }
    ll mn = (n + 5) / 6;   
    ll mx = n / 4;        

    if(mn > mx) cout << -1 << endl;
    else cout << mn << " " << mx << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}
