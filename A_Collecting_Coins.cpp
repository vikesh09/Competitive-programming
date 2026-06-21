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
   ll a,b,c,n; cin>>a>>b>>c>>n;
   ll mx = max({a, b, c});
   ll needed = (mx - a) + (mx - b) + (mx - c);

   if(n >= needed && (n - needed) % 3 == 0){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--){
        solve();
    }
}
