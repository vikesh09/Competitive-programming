#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define s string
using namespace std;

void solve(){
    s a,b; cin>>a>>b;
    for(int i=0;i<a.size();i++){
    if(a[i]!=b[i]){
        cout<<'1';
    }
    else{
        cout<<'0';
    }
   }

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}