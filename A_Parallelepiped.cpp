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

void solve(){
    int ab,bc,ac; cin>>ab>>bc>>ac;
    int x= sqrt((ab*ac)/bc);
    int y= sqrt((ab*bc)/ac);
    int z= sqrt((ac*bc)/ab);
    int ans= 4*x +4*y +4*z;
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}