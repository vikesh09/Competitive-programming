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

void solve() {
    string s; cin>>s;
    char cur='a';
    int ans=0;
    for(char ch: s){
        int d=abs(ch-cur);
        ans+=min(d,26-d);
        cur=ch;
    }
    cout<<ans<<endl;
 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}