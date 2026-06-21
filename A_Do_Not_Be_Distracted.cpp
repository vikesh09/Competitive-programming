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
  int n; cin>>n;
  string s; cin>>s;
  for(char c='A';c<='Z';c++){
    int first=n;
    int last=-1;
    for(int i=0;i<n;i++){
        if(s[i]==c){
            first=min(first,i);
            last=max(last,i);
        }
    }
    for(int i=first;i<=last;i++){
        if(s[i]!=c){
            cout<<"NO"<<endl;
            return;
        }
    }
  }
  cout<<"YES"<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}