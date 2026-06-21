#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;

void solve(){
   int n,m; cin>>n>>m;
   vi a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   sort(a.begin(),a.end());
   int sum=0;
   for(int i=0;i<m;i++){
    if(a[i]<0){
        sum+=abs(a[i]);
    }

   }
   cout<<sum<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
