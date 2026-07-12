#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <unordered_map>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve(){
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            cout<<i+1<<" ";
        }
        else{
            cout<<i-1<<" ";
        }
    }
    cout<<endl;

   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}