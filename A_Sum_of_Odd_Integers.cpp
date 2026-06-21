#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>

#define ll long long
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        ll n,k; cin>>n>>k;
        
        if (k * k <= n && (n % 2 == k % 2))
            cout << "YES\n";
        else
            cout << "NO\n";

    }
    
}