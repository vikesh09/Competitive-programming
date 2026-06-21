#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define endl "\n"

using namespace std;

void solve(){
    ll n; cin>>n;
    ll c1=n/3;
    ll c2=n/3;
    if(n%3==1){
        c1++;
        
    }
    else if(n%3==2){
        c2++;
    }
    cout<<c1<<" "<<c2<<endl;


   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--){
        solve();
    }
}
