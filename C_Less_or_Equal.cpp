#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <unordered_map>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    if(k==0){
        if(a[0] == 1){
            cout<<-1<<endl;
        } 
        else cout<<a[0] - 1<<endl;
        return;
    }
    int ans=a[k-1];
    if(k < n && a[k] == ans){
        cout<<-1<<endl;
    } 
    else{
        cout<<ans<<endl;
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}