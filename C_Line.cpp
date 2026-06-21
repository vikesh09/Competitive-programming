#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
#define vl vector <long long>
#define vi vector <int>

using namespace std;

void solve(){
   ll n; cin>>n;
   string s; cin>>s;
   ll sum=0;
   vl g;
   for(int i=0;i<n;i++){
    ll left=i;
    ll right=n-1-i;
    if(s[i]=='L'){
        sum+=left;
        if(right>left){
            g.push_back(right-left);
        }
    }
    else{
        sum+=right;
        if(left>right){
            g.push_back(left-right);
        }
    }
   }
   sort(g.begin(),g.end(),greater<ll>());
   vl result;
   ll total_sum=0;
   for(int j=1;j<=n;j++){
    if(j<=g.size()){
        total_sum+=g[j-1];
    }
    cout<<sum+total_sum<<(j==n?"":" ");
   }
   cout<<endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}