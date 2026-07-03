#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <unordered_map>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve() {
    int a, b, c; cin>>a>>b>>c;
    int t1 = abs(a - 1);
    int t2 = abs(b - c) + abs(c - 1);

    if (t1 < t2) {
        cout<<1<<endl;
    }
    else if (t2 < t1) {
        cout<<2<<endl;
    }
    else {
        cout<<3<<endl;
    }
 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}