#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define endl "\n"

using namespace std;

void solve(){
    int n,m; cin>>n>>m;
    int ans=min(n,m);
    if(ans%2==0){
        cout<<"Malvika"<<endl;
    }
    else if(ans%2!=0){
        cout<<"Akshat"<<endl;
    }
   
    
   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
