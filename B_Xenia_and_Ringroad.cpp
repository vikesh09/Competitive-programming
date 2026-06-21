#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
#define vi vector<int>
using namespace std;

void solve(){
   ll n,m; cin>>n>>m;
   vi a(m);
   for(int i=0;i<m;i++){
    cin>>a[i];
   }
   ll c=1; ll t=0;
   for(int i=0;i<m;i++){
    t+=(a[i]-c+n)%n;
    c=a[i];
   }
   cout<<t<<endl;

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}