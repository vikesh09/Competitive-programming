#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;

void solve(){
   int k; cin>>k;
   for(int i=1; ;i++){
    if(i%3==0 || i%10==3){
        continue;
    }
    if(--k==0){
        cout<<i<<endl;
        break;
    }
   }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--){
        solve();
    }
}
