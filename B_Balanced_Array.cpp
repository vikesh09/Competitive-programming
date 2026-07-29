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
   if(n%4!=0){
    cout<<"NO"<<endl;
    return;
   }
   vi a;
   int e=0; int o=0;
   for(int i=1; i<=n/2;i++){
    a.push_back(2*i);
    e+=2*i;
   }
   for(int i=1; i<n/2;i++){
    a.push_back((2*i)-1);
    o+=2*i-1;
   }
   a.push_back(e-o);
   cout<<"YES"<<endl;
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
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