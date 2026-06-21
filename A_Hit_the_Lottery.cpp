#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define s string
using namespace std;

void solve(){
   ll n; cin>>n;
   ll cnt=0;
   cnt+=n/100;
   n%=100;
   cnt+=n/20;
   n%=20;
   cnt+=n/10;
   n%=10;
   cnt+=n/5;
   n%=5;
   cnt+=n/1;
   cout<<cnt<<endl;

   

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}