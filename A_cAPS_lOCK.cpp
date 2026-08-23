#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <unordered_map>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve(){
    string s; cin>>s;
    bool au=true;
    bool al=true;
    for(int i=0;i<(int)s.size();i++){
        if(!isupper(s[i])){
            au=false;
        }
        if(i>0 && !isupper(s[i])){
            al=false;
        }
    }
    if(au || al){
        for(int i=0;i<(int)s.size();i++){
            if(isupper(s[i])){
                s[i]=tolower(s[i]);
            }
            else{
                s[i]=toupper(s[i]);
            }
        }
    }
    cout<<s<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}