#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <numeric>
#include <unordered_map>
#include <queue>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve(){
    int n; cin>>n;
    unordered_map<string,int> mp;
    while(n--){
        string s; cin>>s;
        if(mp.find(s)==mp.end()){
            cout<<"OK"<<endl;
            mp[s]=1;
        }
        else{
            string t=s+to_string(mp[s]);
            cout<<t<<endl;
            mp[s]++;
            mp[t]=1;

        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}