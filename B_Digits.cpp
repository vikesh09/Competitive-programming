#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long
#define endl "\n"

using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        ll n,d; cin>>n>>d;
        for(int i=1;i<n;i++){
            if(i%2!=0){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}