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
   ll x,y; cin>>x>>y;
   ll a,b; cin>>a>>b;

   ll mn= min(x,y);
   ll mx=max(x,y);
   
    if(2*a<=b){
        cout<<((x+y)*a)<<endl;
    }
    else{
        cout<<(mn*b +(mx-mn)*a)<<endl;
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
