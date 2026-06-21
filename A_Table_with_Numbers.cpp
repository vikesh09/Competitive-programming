#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define endl "\n"

using namespace std;

void solve(){
    int n, h, l; cin>>n>>h>>l;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int both = 0, onlyRow = 0, onlyCol = 0;

    for(int x : a){
        if(x <= h && x <= l) both++;
        else if(x <= h) onlyRow++;
        else if(x <= l) onlyCol++;
    }

    int ans = 0;

   
    int use = min(onlyRow, onlyCol);
    ans += use;
    onlyRow -= use;
    onlyCol -= use;

    
    int rem = onlyRow + onlyCol;
    int take = min(both, rem);
    ans += take;
    both -= take;

    
    ans += both / 2;

    cout << ans <<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}
