#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<ll>  cost;

    ll c = 3;
    ll cnt = 1;
    for (int i = 0; i < 21; ++i) {
        cost.push_back(c);
        c = 3 * c + cnt;
        cnt *= 3;
    }

    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll min_k = 0;
        ll min_cost = 0;
        int z = 0;
        while (n) {
            min_k += n % 3;
            min_cost += (n % 3) * cost[z];
            n /= 3;
            z++;
                
        }
        cout << min_cost <<endl;
        
    }
}