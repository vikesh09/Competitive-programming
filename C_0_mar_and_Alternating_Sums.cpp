#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <unordered_map>
#include <map>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
const ll MOD = 1e9 + 7;

using namespace std;

ll nCr(int n, int r) {
    if(r<0||r>n) return 0;
    if(r==0||r==n) return 1;
    if(r>n/2) r=n-r;
    ll num=1,den=1;
    for(int i=1;i<=r;i++){
        num=(num*(n-i+1))%MOD;
        den=(den*i)%MOD;
    }
    ll rev = 1;
    ll base = den;
    ll exp = MOD - 2;
    while(exp > 0){
        if(exp & 1) rev = (rev * base) % MOD;
        base = (base * base) % MOD;
        exp>>= 1;
    }
    return (num * rev)%MOD;
}
ll power2(ll x) {
    ll res = 1;
    ll base = 2;
    while(x > 0){
        if(x & 1) res = (res * base)%MOD;
        base = (base * base) % MOD;
        x>>= 1;
    }
    return res;
}

void solve(){
    int n; cin>>n;
    int neg = 0;
    map<ll, int> freq;
    vl unique_vals;
    
    for(int i = 0; i < n; i++){
        ll x; cin >> x;

        if(x == -1){
            neg++;
        } 
        else{
            if(freq[x] == 0){
                unique_vals.push_back(x);
            }
            freq[x]++;
        }
    }
    ll dp_even = 1; 
    ll dp_odd = 0;
    if(neg > 0){
        ll ways_even = 0; 
        ll ways_odd = 0; 
        for(int i = 0; i <= neg; i++){
            if(i % 2 == 0) ways_even = (ways_even + nCr(neg, i)) % MOD;
            else ways_odd = (ways_odd + nCr(neg, i)) % MOD;
        }
        dp_odd = ways_odd;
        dp_even = ways_even;
    }
    ll last_val = -1;
    int last_count = neg;
    ll cur_even = 1; 
    ll cur_odd = 0;
    
    if(neg > 0){
        ll p2 = power2(neg - 1);
        cur_even = p2;
        cur_odd = p2;
    }
    for(size_t i = 0; i < unique_vals.size(); i++){
        ll val = unique_vals[i];
        int count = freq[val];
        ll p2 = power2(count - 1);
        
        ll next_even = cur_even;
        ll next_odd = cur_odd;
        next_even = (cur_even * p2) % MOD;
        next_odd = (cur_odd * p2) % MOD;
        ll prev_val = (i == 0) ? -1 : unique_vals[i-1];
        if(val - prev_val == 1){
            next_even = (next_even + cur_odd * p2) % MOD;
        }
        cur_even = next_even;
        cur_odd = next_odd;

}
cout<<cur_even<<endl;

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}