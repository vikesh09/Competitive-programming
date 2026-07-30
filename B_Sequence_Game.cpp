#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <numeric>
#include <unordered_map>
#include <queue>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve(){
    int n; cin>>n;
    vi b;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(i && b.back()>x){
            b.push_back(1);
        }
        b.push_back(x);
    }
    cout<<b.size()<<endl;
    for(int d: b){
        cout<<d<<" ";
    }
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}