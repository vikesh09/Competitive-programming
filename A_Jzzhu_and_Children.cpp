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
   int n,m; cin>>n>>m;
   vi a(n);
   int ans=-1;
   int mx=0;
   for(int i=1;i<=n;i++){
    int x; cin>>x;
    int r=(x+m-1)/m;
    if(r>=mx){
        mx=r;
        ans=i;
    }
   }
   cout<<ans<<endl;
 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}