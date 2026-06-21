#include <iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#define ll long long
#define endl "\n"

using namespace std;

void solve(){
    ll n;  cin >> n;
    
    if(n % 2 != 0){
        cout << 0 << endl;
        return;
    }
    ll S = n / 2;
    ll ans = (S - 1) / 2;
    
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
   
}
