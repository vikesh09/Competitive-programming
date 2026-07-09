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
    int n; cin>>n;
    string s; cin>>s;
    transform(s.begin(), s.end(), s.begin(), [] (char c) {
        return tolower(c);
    });
    s.erase(unique(s.begin(), s.end()), s.end());
    cout<<(s=="meow" ? "YES" : "NO")<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}