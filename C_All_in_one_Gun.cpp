#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve() {
    ll n, h, k; cin>>n>>h>>k;
    vl a(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    ll full= (h-1)/sum;
    ll rem=h-full*sum;
    vl pref(n), prefMin(n), suffMax(n);
    pref[0]=a[0];
    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+a[i];
    }
    prefMin[0]=a[0];
    for(int i=1;i<n;i++){
        prefMin[i]=min(prefMin[i-1],a[i]);
    }
    suffMax[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        suffMax[i]=max(suffMax[i+1],a[i]);
    }
    for(int i=0;i<n;i++){
        ll dm=pref[i];
        if(i!=n-1 && prefMin[i]<suffMax[i+1]){
            dm+=suffMax[i+1]-prefMin[i];
        }
        if(dm>=rem){
            cout<<(full*(n+k)+(i+1))<<endl;
            return;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
    
}