#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve() {
  string s; cin>>s;
  int suff=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='1' || s[i]=='3'){
        suff++;
    }
  }
  int pref=0;
  int maxkeep=suff;
  for(int i=0;i<s.size();i++){
    if(s[i]=='1'|| s[i]=='3'){
        suff--;
    }
    else if(s[i]=='2'){
        pref++;
    }
    maxkeep=max(maxkeep,pref+suff);
  }
  cout<<s.size()-maxkeep<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}