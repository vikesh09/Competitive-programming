#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#include<set>
#include <numeric>
#include <iomanip>
#include<algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;


ll gcd(ll a, ll b){ return b ? gcd(b, a%b) : a; }
ll mLcm(ll a, ll b){ return a / gcd(a,b) * b; }
ll getOne(ll a,ll m){
    return m/a;
}
ll getTwo(ll a, ll b,ll m){
    return m/ mLcm(a,b);
}
ll getThree(ll a, ll b, ll c, ll m){
    return m/ mLcm(mLcm(a,b),c);
}
ll get(ll a, ll b, ll c, ll m){
    ll c1 = getOne(a, m);
    ll c2 = getTwo(a, b, m) + getTwo(a, c, m);
    ll c3 = getThree(a, b, c, m);
    return (c1 - c2 + c3) * 6 + (c2 - 2 * c3) * 3 + c3 * 2;

}
void solve(){
    ll a,b,c,m; cin>>a>>b>>c>>m;
             
    cout << get(a, b, c, m) << " " << get(b, a, c, m) << " " << get(c, a, b, m) << endl;
   

    

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
    
}
