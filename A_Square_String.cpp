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
    bool ok=true;
    if(s.length()%2==0){
        for(int i=0;i<s.length()/2;i++){
            if(s[i]!=s[i+s.length()/2]){
                ok=false;
            }

        }
    }
    else{
        ok=false;
    }
    if(ok){
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
