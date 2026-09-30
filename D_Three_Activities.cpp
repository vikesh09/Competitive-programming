#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<numeric>
#include<unordered_map>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

vi get_best3(vi &a){
    int mx1=-1,mx2=-1,mx3=-1;
    for(int i=0;i<a.size();i++){
        if(mx1==-1 || a[i]>a[mx1]){
            mx3=mx2;
            mx2=mx1;
            mx1=i;
        }
        else if(mx2==-1 || a[i]>a[mx2]){
            mx3=mx2;
            mx2=i;
        }
        else if(mx3==-1 || a[i]>a[mx3]){
            mx3=i;
        }
    }
    return {mx1,mx2,mx3};
}
void solve(){
    int n; cin>>n;
    vi a(n),b(n),c(n);
    for(int &x:a) cin>>x;
    for(int &x:b) cin>>x;
    for(int &x:c) cin>>x;
    vi A=get_best3(a);
    vi B=get_best3(b);
    vi C=get_best3(c);
    int ans=0;
    for(int x:A){
        for(int y:B){
            for(int z:C){
                if(x!=y && x!=z && y!=z){
                    ans=max(ans,a[x]+b[y]+c[z]);
                }
            }
        }
    }
    cout<<ans<<endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}