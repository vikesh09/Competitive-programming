#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>
#include <limits>
#define ll long long
using namespace std;

int solve(ll w, ll d, bool whiteFirst) {
    ll size = 1;
    int layers = 0;

    while (true) {
        
        bool useWhite;
        if (layers % 2 == 0)
            useWhite = whiteFirst;
        else
            useWhite = !whiteFirst;

        
        if (useWhite) {
            if (w < size) break;
            w -= size;
        } else {
            if (d < size) break;
            d -= size;
        }

        layers++;
        size *= 2;
    }
    return layers;
}




int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        ll a,b; cin>>a>>b;

        int ans1 = solve(a, b, true);   
        int ans2 = solve(a, b, false);  

        cout << max(ans1, ans2) << "\n";

    }
}