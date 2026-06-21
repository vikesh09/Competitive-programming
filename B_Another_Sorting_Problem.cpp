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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll k = 0;

    for (int i = 0; i + 1 < n; i++) {
        if (a[i] > a[i + 1]) {
            k = max(k, a[i] - a[i + 1]);
        }
    }
    ll prev = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] >= prev) {
            prev = a[i];
        } else {
            if (a[i] + k < prev) {
                cout << "NO"<<endl;;
                return;
            }
            prev = a[i] + k;
        }
    }

    cout << "YES"<<endl;
    

        
   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
