#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

const int INF = 1e9;
using namespace std;

void solve(){
    int n; cin>>n;
    if(n<=1399) cout<<"Division 4"<<endl;
    else if(1400<=n && n<= 1599){
        cout<<"Division 3"<<endl;
    } 
    else if(1600<=n && n<=1899){
        cout<<"Division 2"<<endl;

    } 
    else{
        cout<<"Division 1"<<endl;
    }
   
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();

    }
    
}