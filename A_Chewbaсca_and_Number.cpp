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
  string s; cin>>s;
  for(int i=0;i<s.size();i++){
    int t=s[i]-'0';
    int invt= 9-t;
    if(invt<t && !(i==0 && invt==0)){
        s[i]='0'+ invt;

    }
  }
  cout<<s<<endl;
   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
