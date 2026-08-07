#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <numeric>
#include <unordered_map>
#include <queue>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve() {
    int n; cin>>n;
    vi v1,v2,v3;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        if(x==1){
            v1.push_back(i);
        }
        else if(x==3){
            v2.push_back(i);
        }
        else{
            v3.push_back(i);
        }
    }
    int t= min({(int)v1.size(), (int)v2.size(), (int)v3.size()});
    cout<<t<<endl;
    for(int i=0;i<t;i++){
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}