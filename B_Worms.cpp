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
    vi p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
        if(i){
            p[i]+=p[i-1];
        }
    }
    int m; cin>>m;
    while(m--){
        int x; cin>>x;
        cout<<lower_bound(p.begin(),p.end(),x)-p.begin()+1<<endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}