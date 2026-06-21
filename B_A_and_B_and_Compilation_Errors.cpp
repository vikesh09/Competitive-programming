#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define s string
using namespace std;

void solve(){
    int n; 
    if(!(cin>>n)) return; 
    
    ll sum1 = 0, sum2 = 0, sum3 = 0;
    ll val;

    for(int i=0;i<n; i++){
        cin>>val;
        sum1+=val;
    }
    for(int i=0;i<n-1; i++){
        cin>>val;
        sum2+=val;
    }

    for(int i=0;i<n-2; i++){
        cin>>val;
        sum3+=val;
    }
    int ans1= sum1-sum2;
    int ans2= sum2-sum3;
    cout<<ans1<<endl; cout<<ans2<<endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--){
        solve();
    }
    
}