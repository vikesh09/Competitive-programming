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
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum = 0;
    int cnt_one = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > 0){
            cnt_one++;
        }
        sum += a[i];
    }
    int sum2 = sum - cnt_one;
    ll sub = n - 1 - sum2;
 
    cout << cnt_one - max(0ll, sub) <<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}