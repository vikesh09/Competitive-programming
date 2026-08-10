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
    vi a(n);
    for(auto&it: a){
        cin>>it;
    }
    int o=0;
    for(int x:a){
        if(x==1){
            o++;
        }
    }
    int curr=0;
    int best=0;
    for(int x:a){
        int gain;
        if(x==0){
            gain=1;
        }
        else{
            gain=-1;
        }
        curr+=gain;
        curr=max(curr,0);
        best=max(best,curr);

    }
    cout<<o+ best<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}