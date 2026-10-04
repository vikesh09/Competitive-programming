#include<iostream>
#include<algorithm>
#include<vector>

#define ll long long
#define vi vector<int>
#define endl "\n"
#define vl vector<long long>

using namespace std;

void solve(){
    int n; cin>>n;
    vi a(3);
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    cout<<max(n-a[0],max(n-a[1],n-a[2]))<<endl;

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}