#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>

#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int z = abs(a[0]);

    for(int i = 1; i < n; i++){
        z = min(z, abs(a[i]));
    }

    cout << z << "\n";
    
}

int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}