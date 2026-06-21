#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
#define s string
using namespace std;

void solve(){
   ll n; cin>>n;
   vl x(n);
   for(int i=0;i<n;i++) cin>>x[i];
   ll q; cin>>q;
   vl m(q);
   for(int i=0;i<q;i++) cin>>m[i];
   sort(x.begin(),x.end());

   for(int i=0;i<q;i++){
    ll count=upper_bound(x.begin(),x.end(),m[i])-x.begin();
    cout<<count<<endl;
   }

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}