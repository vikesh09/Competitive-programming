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
  char d; string s; cin>>d>>s;
  string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
  string ans = "";
  for(char ch:s){
    int pos = keyboard.find(ch);
    if(d=='R'){
        ans += keyboard[pos - 1];
    }
    else{
        ans += keyboard[pos + 1];
    }
  }
  cout<<ans<<endl;

  
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}