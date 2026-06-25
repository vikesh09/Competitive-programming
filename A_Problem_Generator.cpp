#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve() {
 int n,m; cin>>n>>m;
 string s; cin>>s;
 unordered_map<char,int>freq;
 int ans=0;
 for(char ch:s){
    freq[ch]++;
 }
 for(char ch='A';ch<='G';ch++){
    if(freq[ch]<m){
        ans+=(m-freq[ch]);
    }
 }
 cout<<ans<<endl;

  
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}