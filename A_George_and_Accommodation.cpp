#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;

void solve(){
    int n; cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++){
        int p,q;
        cin>>p>>q;
        if(q-p >=2){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
