#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
#define vi vector<int>

using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int cnt=0;
    for(int i=0;i<n;i++){
        string temp=s.substr(i) +s.substr(0,i);
        int cnt2=1;
        for(int j=1;j<n;j++){
            if(temp[j]!=temp[j-1]) cnt2++;
        }
        cnt= max(cnt,cnt2);
    }
    cout<<cnt<<endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
    
}