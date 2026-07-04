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
   int n; cin>>n;
   string s; cin>>s;
   int ans=0;
   string a;
   for(int i=0;i<n-1;i++){
    int cur=0;
    for(int j=0;j<n-1;j++){
        if(s[j]==s[i] && s[j+1]==s[i+1]){
            cur++;
        }
    }
    if(ans<cur){
        ans=cur;
        a=string(1,s[i])+string(1,s[i+1]);
    }
   }
   cout<<a<<endl;
 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}