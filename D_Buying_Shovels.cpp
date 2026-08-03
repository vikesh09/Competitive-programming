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
	int n,k; cin>>n>>k;
    int ans=n;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(i<=k){
                ans=min(ans,n/i);
            }
            if(n/i<=k){
                ans=min(ans,i);
            }
        }

    }
    cout<<ans<<endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}