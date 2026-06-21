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
    string p; cin>>p;
    for(char c: p){
        if(c=='H' || c=='Q' || c=='9'){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    

    
    
}