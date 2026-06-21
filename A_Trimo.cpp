#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vc vector<char>
#define vl vector<long long>
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int i=0;
    while(i<n && s[i]=='o'){
        i++;
    }
    for(;i<n;i++){
        cout<<s[i];
    }
    cout<<endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
