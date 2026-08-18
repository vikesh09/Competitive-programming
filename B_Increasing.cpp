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

void solve(){
    int n; cin>>n;
    vl a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--) solve();
}