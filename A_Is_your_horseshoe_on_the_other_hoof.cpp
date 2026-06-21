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
   vi a(4);
   for(int i=0;i<4;i++) cin>>a[i];
   sort(a.begin(),a.end());
   int cnt=1;
   for(int i=0;i<3;i++){
    if(a[i]!=a[i+1]){
        cnt++;
    }
   }
   cout<<(4-cnt)<<endl;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
