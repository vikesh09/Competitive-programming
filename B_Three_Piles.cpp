#include<iostream>
#include<algorithm>
#include<vector>

#define ll long long
#define vi vector<int>
#define endl "\n"
#define vl vector<long long>

using namespace std;

void solve(){
    ll a,b,c; cin>>a>>b>>c;
    cout<<max(abs(a-b),a+c-b)<<endl;

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}