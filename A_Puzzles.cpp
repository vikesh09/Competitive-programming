#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>


using namespace std;
void solve(){
    int n,m; cin>>n>>m;
    vi a(m);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int ans=1e9;
    for(int i=0;i<m-n+1;i++){
        ans=min(ans,a[i+n-1]-a[i]);
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}