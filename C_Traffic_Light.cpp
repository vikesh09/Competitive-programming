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
    int n; char c; string s; cin>>n>>c>>s;
    if(c=='g'){
        cout<<0<<endl;
        return;
    }
    s+=s;
    int m=2*n,nt=-1,ans=0;
    for(int i=m-1;i>=0;i--){
        if(s[i]=='g'){
            nt=i;
        }
        else if(i<n && s[i]==c){
            ans=max(ans,nt-i);
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