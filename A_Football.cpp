#include <iostream>
#include<vector>
#include<string>
#include<map>
#include<cmath>
#include<algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;

void solve(){
    int n; cin>>n;
    map<string,int> mp;
    string team;
    for(int i=0;i<n;i++){
        cin>>team;
        mp[team]++;
    }
    string win;
    int mx=0;
    for(auto x : mp){
        if(x.second > mx){
            mx=x.second;
            win=x.first;
        }

    }
    cout<<win<<endl;

  
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
