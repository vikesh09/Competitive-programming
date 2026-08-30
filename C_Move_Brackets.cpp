#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<numeric>
#include<unordered_map>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    int ans=0,b=0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            b++;
        }
        else{
            b--;
            if(b<0){
                b=0;
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}