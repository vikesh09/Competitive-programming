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
    int n,m; cin>>n>>m;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            for(int j=1;j<=m;j++){
                cout<<"#";
            }
        }
        else if(i%4==2){
            for(int j=1;j<m;j++){
                cout<<".";
            }
            cout<<"#";
        }
        else{
            cout<<"#";
            for(int j=1;j<m;j++){
                cout<<".";
            }
        }
        cout<<endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    
}