#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>


using namespace std;
void solve(){
  int n,m,a,b; cin>>n>>m>>a>>b;
  int cost1 = n * a;
  int cost2 = ((n + m - 1) / m) * b;
  int cost3 = (n / m) * b + (n % m) * a;
  int ans= min(min(cost1,cost2),cost3);
  cout<<ans<<endl;
   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
   
}