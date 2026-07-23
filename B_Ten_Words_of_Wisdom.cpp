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
    int w=-1,bs=0;
    for(int i=1;i<=n;i++){
        int a,b; cin>>a>>b;
        if(b>bs && a<=10){
            w=i;
            bs=b;
        }
    }
    cout<<w<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}