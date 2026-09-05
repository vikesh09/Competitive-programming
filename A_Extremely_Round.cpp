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
    int cnt=n;
    int d=0;
    while(cnt>0){
        d++;
        cnt/=10;
    }
    int fd=n;
    while(fd>=10){
        fd/=10;
    }
    int ans=9*(d-1)+fd;
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