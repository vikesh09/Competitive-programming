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

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int cnt=0,ans=0;
    for(char c:s){
        if(c=='#'){
            cnt++;
        }
        else{
            ans=max(ans,(cnt+1)/2);
            cnt=0;
        }
    }
    ans=max(ans,(cnt+1)/2);
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