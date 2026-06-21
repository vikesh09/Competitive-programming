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
    for(int i=0;i<s.size();i++){
        if(s[i]=='.'){
            cout<<0;
        }
        else{
            if(s[i+1]=='.'){
                cout<<1;
            }
            else{
                cout<<2;
            }
            i++;
        }
    }
   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
