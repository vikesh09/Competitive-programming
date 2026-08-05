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

void solve() {
    int n; cin>>n;
    int m=n*(n-1)/2;
    vi b(m);
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(b.begin(),b.end());
    int c=n;
    for(int i=0;i<m;i+=--c){
        cout<<b[i]<<" ";
    }
    cout<<1000000000<<endl;
   
        
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}