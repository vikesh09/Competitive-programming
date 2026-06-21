#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<math.h>
#define ll long long 
#define endl "\n"

using namespace std;

void solve(){
    int n,s,x; cin>>n>>s>>x;
    vector<int> a(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum <= s && (s - sum) % x == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

    
}


int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();

    }
    
}
