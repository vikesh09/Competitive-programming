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
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=10;
    int even=0;
    for(int i=0;i<n;i++){
        if(a[i]%k==0){
            cout<<0<<endl;
            return;
        }
        int cost=k-(a[i]%k);
        ans=min(ans,cost);
        if(a[i]%2==0){
            even++;
        }
    }
    if(k==4){
        if(even>=2){
            ans=min(ans,0);
        }
        else if(even==1){
            for(int i=0;i<n;i++){
                if(a[i]%2!=0){
                    ans=min(ans,1);
                }
            }
        }
        else{
            ans=min(ans,2);
        }
    }
    cout<<ans<<endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--) solve();
}