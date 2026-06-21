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
    int n; cin>>n;
    vi a;
    int p=1;
    while(n>0){
        int digit=n%10;
        if(digit!=0){
            a.push_back(digit*p);
        }
        n/=10;
        p*=10;
    }
    cout<<a.size()<<endl;
    for(int x:a) cout<<x<<" ";
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