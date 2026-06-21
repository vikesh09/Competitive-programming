#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define endl "\n"

using namespace std;

void solve(){
    int n,m; cin>>n>>m;
    string x; cin>>x;
    string s; cin>>s;
    for(int i=0;i<6;i++){
        if(x.find(s) != string::npos){
            cout<<i<<endl;
            return;
        }
        x+=x;

    }
    cout<<(-1)<<endl;
    
   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--){
        solve();
    }
}
