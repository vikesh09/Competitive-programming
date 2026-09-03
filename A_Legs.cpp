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

void solve(){
    int n; cin>>n;
    if(n==2){
        cout<<1<<endl;
        return;
    }
    else if(n%4==0){
        cout<<n/4<<endl;
        return;
    }
    else if(n%4!=0){
        cout<<n/4+(n-(n/4)*4)/2<<endl;
    }
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