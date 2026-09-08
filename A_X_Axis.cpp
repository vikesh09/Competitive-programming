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
    int x1,x2,x3; cin>>x1>>x2>>x3;
    int ans1= abs(x1-x1)+abs(x1-x2)+abs(x1-x3);
    int ans2= abs(x1-x2)+abs(x2-x2)+abs(x2-x3);
    int ans3= abs(x3-x1)+abs(x3-x2)+abs(x3-x3);
    int ans=min(ans1,min(ans2,ans3));
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