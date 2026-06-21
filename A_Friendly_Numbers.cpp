#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>


using namespace std;

ll sumDigit(ll n){
    ll s=0;
    while(n){
        s+=n%10;
        n=n/10;

    }
    return s;

}

void solve(){
    ll x; cin>>x;
    int cnt=0;
    for(ll i=x; i<=x+90;i++){
        if(i-sumDigit(i)==x){
            cnt++;
        }
    }
    cout<<cnt<<endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
    
}