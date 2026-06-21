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
   ll n,t; cin>>n>>t;
   if(t == 10){
    if(n == 1){
        cout<<-1;
    }
    else{
        cout<<"10";
        for(int i=0;i<n-2;i++){
            cout<<"0";
        }
    }
   }
   else{
    cout<<t;
    for(int i = 0; i < n-1; i++) cout << "0";
   }
   
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
