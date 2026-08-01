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
    bool v[26]={};
    int r=0;
    for(char c:s){
        if(!v[c-'A']){
            r+=2;
            v[c-'A']=true;
        }
        else{
            r++;
        }
    }
    cout<<r<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}