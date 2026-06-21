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
   int n; cin>>n;
   vi a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   sort(a.begin(),a.end());
   int H= a[n-1]+1;
   vi x;
   for(int i=0;i<n;i++){
    x.push_back(H-a[i]);
   }
   sort(x.begin(),x.end());
   int k= x[n-1];
   cout<<k<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
    
}