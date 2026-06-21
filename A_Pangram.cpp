#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
#define s string
#define vvi vector<vector<int>>

using namespace std;

void solve(){
    int n; cin>>n;
    s r; cin>>r;
    set<char> seen;
    for(char c :r){
        seen.insert(tolower(c));

    }
    bool pangram=true;
    for(char c='a'; c<='z';c++){
        if(!seen.count(c)){
            pangram=false;
            break;
        }
    }
    cout<<(pangram ?"YES":"NO")<<endl;
   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    solve();
    
    
    
}