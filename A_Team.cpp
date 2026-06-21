#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;
void solve(){
   int n; cin>>n;
   vi a(n),h(n),k(n);
   for(int i=0;i<n;i++){
    cin>>a[i]>>h[i]>>k[i];
   }
   int cnt=0;
   for(int i=0;i<n;i++){
    if(a[i]+h[i]+k[i]>=2){
        cnt++;
    }

   }
   cout<<cnt<<endl;;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
