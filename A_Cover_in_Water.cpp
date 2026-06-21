#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
#define s string
#define vvi vector<vector<int>>
using namespace std;

void solve(){
    int n; cin>>n;
    s r; cin>>r;
    bool empty=false; int total_cell=0;
    for(int i=0;i<n;i++){
        if(r[i]=='.' && i+1<n && r[i+1]=='.' && i+2<n && r[i+2]=='.'){
            empty=true;

        }
        if(r[i]=='.'){
            total_cell++;
        }
    }
    if(empty) cout<<2<<endl;
    else cout<<total_cell<<endl;
    

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
    
    
}