#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#include<set>
#include <iomanip>
#include<algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;
void solve(){
    int n; cin >> n;
    bool found = false;
    for(int b = 0; b * 2021 <= n; b++){
        int rem = n - b * 2021;
        if(rem % 2020 == 0){
            found = true;
            break;
        }
    }
    cout << (found ? "YES" : "NO") << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
    
}
