#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;
void solve(){
    int n; cin >> n;
    vi p(n+1);
    for(int i = 1; i <= n; i++) cin >> p[i];
    
    vector<bool> marked(n+1, false);
    int ans = 0;
    
    for(int i = 1; i <= n; i++){
        if(marked[i]){
            break;
        }
        if(p[i] <= i){
            ans++;
            marked[p[i]] = true;
        }
        
    }
    cout<<ans<<endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
    
    
}


