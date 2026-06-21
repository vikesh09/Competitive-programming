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
   int n; cin>>n;
   vl a(n);
   ll diff=1e9;
   bool ok=true;
   for(int i=0;i<n;i++){
    cin>>a[i];
    if(i>0){
        diff= min(a[i]-a[i-1],diff);
        ok&=a[i]>=a[i-1];
    }
   }
   if(!ok){
    cout<< 0<< endl;
    return;
   }
   cout<<diff/2+1<<endl;




    
    
   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
