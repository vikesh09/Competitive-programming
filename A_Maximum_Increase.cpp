#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <unordered_map>
#include <queue>
using namespace std;

#define ll long long
#define vi vector<int>

const ll MOD = 998244353;

void solve(){
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=1;
    int crt=1;
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1]){
            crt++;
        }
        else{
            crt=1;
        }
        ans=max(ans,crt);
    }
    cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}