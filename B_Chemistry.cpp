#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#include<set>
#include<algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;
void solve(){
   int n,k; cin>>n>>k;
   string s; cin>>s;
   vi freq(26,0);
   for(char ch : s){
    freq[ch-'a']++;
    
   }
   int odd=0;
   for(int i=0;i<26;i++){
    if(freq[i]%2!=0){
        odd++;
    }
   }
   if(odd <= k+1){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
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
