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
    vl b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vl a;
    bool ok=true;
    sort(b.rbegin(),b.rend());
    for(int i=2;i<n;i++){
        if(b[i-2]%b[i-1]!=b[i]){
            ok=false;
            break;
        }
    }
    if(ok){
        cout<<b[0]<<" "<<b[1]<<endl;
    }
    else{
        cout<<-1<<endl;
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
