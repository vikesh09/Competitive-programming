#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<math.h>
#define ll long long 
#define endl "\n"

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];

    int l = 0;
    while(l < n && p[l] == n - l) l++; 
    if(l < n) {
        int r = l;
        int max_val = *max_element(p.begin() + l, p.end()); 
        for(int i = l; i < n; i++) {
            if(p[i] == max_val) r = i;
        }
        reverse(p.begin() + l, p.begin() + r + 1);
    }

    for(int x : p) cout << x << " ";
    cout << endl;
}


int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();

    }
    
}
