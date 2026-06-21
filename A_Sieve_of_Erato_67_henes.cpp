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
    bool found= false;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==67){
            found=true;
        }
    }
    if(found) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
    
}