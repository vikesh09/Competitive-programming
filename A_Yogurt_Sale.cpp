#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#define ll long long
#define endl "\n"
using namespace std;
void solve(){
    int n,a,b; cin>>n>>a>>b;
    if(2*a< b){
        cout<<(n*a)<<endl;
    }
    else{
        int pairs = n / 2;
        int rem = n % 2;
        cout << pairs*b + rem*a << endl;
    }
}

int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();

    }
    
    
}
