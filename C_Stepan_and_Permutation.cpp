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
    int n,x,y; cin>>n>>x>>y;
    vi p(n+1);
    for(int i=1;i<=n;i++){
        cin>>p[i];
    }
    vector<vector<int>> adj(n+1);
    for(int i=1;i<=n;i++){
        if(i+x<=n){
            adj[i].push_back(i+x);
            adj[i+x].push_back(i);
        }
        if(i+y<=n){
            adj[i].push_back(i+y);
            adj[i+y].push_back(i);
        }
    }
    vi comp(n+1,0);
    int d=0;
    for(int i=1;i<=n;i++){
        if(comp[i]) continue;
        d++;
        queue<int> q;
        q.push(i);
        comp[i]=d;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            for(int v: adj[u]){
                if(!comp[v]){
                    comp[v]=d;
                    q.push(v);
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(comp[i]!=comp[p[i]]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}