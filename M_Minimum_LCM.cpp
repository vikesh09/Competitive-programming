#include <iostream>
#include<vector>
#include<string>
#include <algorithm>
#include <cmath>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <list>
#include <bitset>
#include <numeric>
#include <iomanip>
#include <climits>
#include <cfloat>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <fstream>
#include <sstream>
#include <functional>
#include <iterator>
#include <utility>
#include <tuple>
#include <array>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;

void solve(){
  ll n; cin>>n;
  if(n%2==0){
    cout<<n/2<<" "<<n/2<<endl;
  }
  else{
    ll d=0;
    for(ll i=3;i*i<=n;i+=2){
        if(n%i==0){
            d=i;
            break;
        }
    }
    if(d==0){
        cout<<1<<" "<<n - 1<<endl;
        return;
    }
    cout<<n/d<<" "<<(n-n/d)<<endl;
  }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
