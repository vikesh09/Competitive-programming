#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define endl "\n"

using namespace std;

void solve(){
    int a,b,c; cin>>a>>b>>c;
    if(a<b && b<c){
        cout<<"STAIR"<<endl;
    }
    else if(a<b && b>c){
        cout<<"PEAK"<<endl;
    }
    else{
        cout<<"NONE"<<endl;
    }
   
    
   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--){
        solve();
    }
}
