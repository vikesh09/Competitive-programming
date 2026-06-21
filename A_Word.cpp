#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>

#define ll long long
using namespace std;

void solve(){
    string s; cin>>s;
    int u=0; int l=0;
    for(char c:s){
        if(c>='A' && c<='Z'){
            u++;
        }
        else{
            l++;
        }
    }
    if(u<l || u==l){
        transform(s.begin(),s.end(),s.begin(),:: tolower);
        cout<<s;
        
    }
    else if(u>l){
        transform(s.begin(),s.end(),s.begin(),:: toupper);
        cout<<s;
    }
    
}

int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}