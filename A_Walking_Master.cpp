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
    ll a,b,c,d; cin>>a>>b>>c>>d;
    if(b<=d && c<=a+d-b){
        cout<<(d-b)+(a+d+b-c)<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
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