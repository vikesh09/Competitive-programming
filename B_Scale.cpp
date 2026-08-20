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
    int n,k; cin>>n>>k;
    char a[n][k];
    for(auto&r:a){
        for(char&c:r){
            cin>>c;
        }
    }
    for(int i=0;i<n;i+=k){
        for(int j=0;j<n;j+=k){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--) solve();
}