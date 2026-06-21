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
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++){
        int price,quality;
        cin>>price>>quality;
        a.push_back({price,quality});

    }
    sort(a.begin(),a.end());
    for(int i=1;i<n;i++){
        if(a[i].second<a[i-1].second){
            cout<<"Happy Alex"<<endl;
            return;
        }
    }
    cout<<"Poor Alex";
    

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
