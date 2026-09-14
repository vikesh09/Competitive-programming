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

void solve(){
    int n; cin>>n;
    ll d; cin>>d;
    vl a(n);
    for(auto & x: a){
        cin>>x;
    }
    sort(a.begin(),a.end());
    if(n%2==0){
        for(int i=1;i<=n;i+=2){
            if(a[i+1]-a[i]>d){
                cout<<"NO"<<endl;
                return;
            }

        }
        cout<<"YES"<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        bool ok=true;
        vl b;
        for(int j=0;j<n;j++){
            if(j!=i){
                b.push_back(a[j]);
            }
        }
        for(int k=0;k<n-1;k+=2){
            if(b[k+1]-b[k]>d){
                ok=false;
                break;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}