#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
#define s string
#define vvi vector<vector<int>>

using namespace std;


void solve(){
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<sum<<endl;
    

    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
}