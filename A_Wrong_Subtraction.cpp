#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
#define s string
using namespace std;

void solve(){
    ll n,k; cin>>n>>k;
    
    if(n%10!=0 || n%10==0){
        while(k>0){
           if(n%10!=0){
            n-=1;
           }
           else{
            n/=10;
           }
           k--;
        }
        cout<<n<<endl;
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}