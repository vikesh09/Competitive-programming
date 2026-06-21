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
    vl ans;
    vl p={
        0,1,2,3,4,5,6,7,8,9,22,11
    };
    ll rem= n%12;
    ll a= p[rem];
    if(a>n){
        cout<<-1<<endl;
        return;
    }
    else{
        ll b=n-a;
        cout<<a<<" "<<b<<endl;
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
