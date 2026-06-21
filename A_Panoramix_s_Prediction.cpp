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
    int n,m; cin>>n>>m;
    int arr[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    for(int i=0;i<15;i++){
        if(n==arr[i] && m==arr[i+1]){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
   
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
