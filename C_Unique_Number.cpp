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

void solve() {
    int x; cin>>x;
    vi ans;
    int sum=0,last=9;
    while(sum<x && last>0){
        ans.push_back(min(x-sum,last));
        sum+=last;
        last--;
    }
    if(sum<x){
        cout<<"-1"<<endl;
    }
    else{
        reverse(ans.begin(),ans.end());
        for(int i:ans){
            cout<<i;
        }
        cout<<endl;
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