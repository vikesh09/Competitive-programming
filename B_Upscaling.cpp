#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <unordered_map>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve() {
   int n; cin>>n;
   for(int i=0;i<2*n;i++){
    for(int j=0;j<2*n;j++){
        cout<<(i/2+j/2 & 1?'.':'#');
    }
    cout<<endl;
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