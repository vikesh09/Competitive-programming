#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>


using namespace std;
void solve(){
   ll n; cin>>n;
   int cnt2=0; int cnt3=0;
   while(n%2==0){
    n/=2;
    cnt2++;
   }
   while(n%3==0){
    n/=3;
    cnt3++;
   }
   if(n==1 && cnt2<= cnt3){
    cout<<((2*cnt3)-cnt2)<<endl;
   }
   else cout<<(-1)<<endl;
   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();

    }
    
}