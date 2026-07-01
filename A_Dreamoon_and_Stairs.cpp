#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <unordered_map>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve() {
    int n, m; cin>>n>>m;
    int mn=(n+1)/2;
    while(mn<=n && mn %m!=0){
        mn++;
    }
    if(mn>n){
        cout<<-1<<endl;
    }
    else{
        cout<<mn<<endl;
    }
 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}