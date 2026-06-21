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
   int n; cin>>n;
   vi a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int of=0; int ut=0;
   for(int i=0;i<n;i++){
    if(a[i]==-1){
        if(of>0){
            of--;
        }
        else{
            ut++;
        }
    }
    else{
        of+=a[i];
    }
   }
   cout<<ut<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}