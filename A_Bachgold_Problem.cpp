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
    if(n%2==0){
        cout<<n/2<<endl;
        for(int i=0;i<n/2;i++){
            cout<<2<<" ";
        }
    }
    else{
        cout<<n/2<<endl;
        for(int i=0;i<n/2-1;i++){
            cout<<2<<" ";
        }
        cout<<3;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

}