#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define endl "\n"

using namespace std;

void solve(){
    long long a,b,c;
    cin >> a >> b >> c;

    if(a == b){
        if(c % 2 == 1) cout << "First"<<endl;
        else cout << "Second"<<endl;
    } 
    else{
        if(a > b) cout << "First"<<endl;
        else cout << "Second"<<endl;
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
