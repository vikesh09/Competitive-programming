#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;

void solve(){
    int n; cin >> n;
    int current = 0, maxi = 0;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;

        current = current - a + b;
        maxi = max(maxi, current);
    }

    cout<<maxi<< endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
