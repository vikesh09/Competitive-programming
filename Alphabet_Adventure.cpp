#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
#define endl "\n"

using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    char v= *max_element(s.begin(),s.end());
    cout<<(v-'a'+1)<<endl;

    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
         solve();
    }
}

