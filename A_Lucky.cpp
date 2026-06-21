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
   string s; cin>>s;
   int s1=0; int s2=0;
   for(int i=0;i<3;i++){
    s1+=s[i];
    
   }
   for(int j=5;j>=3;j--){
    s2+=s[j];
   }
   if(s1==s2) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
   
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();

    }
    
}