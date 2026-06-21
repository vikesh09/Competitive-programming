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
   int n,k; cin>>n>>k;
   vi a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   int cnt=0; int k_score= a[k-1];
   for(int i=0;i<n;i++){
    if(a[i]>=k_score && a[i]>0){
        cnt++;
    }
   }
   cout<<cnt<<endl;
   

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
