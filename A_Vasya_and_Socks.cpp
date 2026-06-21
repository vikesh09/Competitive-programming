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
   int n,m; cin>>n>>m;
   int d= 0;
   while(n>0){
    d++;
    n--;
    if(d%m==0){
        n++;
    }
   }
   cout<<d<<endl;
   
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
