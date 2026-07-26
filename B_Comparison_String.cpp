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
    string s; cin>>s;
    int p=0,q=0,cnt=0;
    for(char ch:s){
        if(ch=='<'){
            cnt++;
            p=max(p,cnt);
        }
        else{
            cnt=0;
        }
    }
    cnt=0;
    for(char c:s){
        if(c=='>'){
            cnt++;
            q=max(q,cnt);
        }
        else{
            cnt=0;
        }
    }
    cout<<max(p,q)+1<<endl;
   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}