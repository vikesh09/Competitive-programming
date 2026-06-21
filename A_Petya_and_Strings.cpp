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
   string s1, s2; cin>>s1>>s2;
   for(int i=0;i<s1.size();i++){
    s1[i]=tolower(s1[i]);
    s2[i]=tolower(s2[i]);
   }
   if(s1< s2){
    cout<<-1;
   }
   else if(s1> s2){
    cout<<1;
   }
   else{
    cout<<0;
   }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
