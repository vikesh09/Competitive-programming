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
   string r= "";
   for(char c:s){
    c=tolower(c);
    if(c!='a' && c!='o' && c!='y' && c!='e' && c!='u' && c!='i'){
        r+='.';
        r+=c;
    }
    }
    cout<<r<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
