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

void solve(){
    ll x; cin>>x;
    ll ans= 0;
    while(x>0){
        ans+=x%2;
        x/=2;
    }
    cout<<ans<<endl;

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}