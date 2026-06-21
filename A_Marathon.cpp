#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
using namespace std;

void solve(){
   int a,b,c,d; cin>>a>>b>>c>>d;
   int c1=0; int c2=0; int c3=0;
   if(a<b) c1++;
   if(a<c) c2++;
   if(a<d) c3++;
   cout<<(c1+c2+c3)<<endl;

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}