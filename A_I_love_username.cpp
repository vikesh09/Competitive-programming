#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

const int INF = 1e9;
using namespace std;

void solve(){
   int n; cin>>n;
   vi a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   int cnt=0; int mx=a[0]; int mn=a[0];
   for(int i=1;i<n;i++){
    if(a[i]>mx){
        cnt++;
        mx=a[i];
    }
    else if(a[i]<mn){
        cnt++;
        mn=a[i];
    }
   }
   cout<<cnt<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
   
    
}