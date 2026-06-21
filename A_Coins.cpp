#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#define endl "\n"
#define ll long long
# define ll long long
# define vi vector<int>
# define vl vector<ll>
# define vc vector<char>
# define vb vector<bool>
# define vvc vector<vector<char>>
# define vvi vector<vector<int>>
# define vvl vector<vector<ll>>
# define vvb vector<vector<bool>>
# define pii pair<int,int>
# define pll pair<ll,ll>
# define vpii vector<pii>

using namespace std;

void solve(){
    ll n,k; cin>>n>>k;
    if(n%2==0 || (n-k)%2==0){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();

    }
    
}