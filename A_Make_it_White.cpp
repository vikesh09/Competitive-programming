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

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    int f=-1;
    int l=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            if(f==-1){
                f=i;
            }
            l=i;
        }
    }
    cout<<l-f+1<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--) solve();
}