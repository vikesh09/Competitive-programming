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
    string r="";
    r+=s[0];
    for(int i=1;i<s.size();i+=2){
        r+=s[i];
    }
    cout<<r<<endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
