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
    int common;
    if (a[0] == a[1] || a[0] == a[2]) common = a[0];
    else common = a[1];
    for(int i=0;i<n;i++){
        if(a[i]!=common){
            cout<<(i+1)<<endl;
        }
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