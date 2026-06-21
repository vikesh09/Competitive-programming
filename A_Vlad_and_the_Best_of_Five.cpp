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
    int c1=0,c2=0;
    for(int i=0;i<5;i++){
        if(s[i]=='A'){
            c1++;
        }
        else{
            c2++;
        }
    }
    if(c1>c2){
        cout<<"A"<<endl;
    }
    else{
        cout<<"B"<<endl;
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
