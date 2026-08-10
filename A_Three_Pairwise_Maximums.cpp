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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){ 
        long long x, y, z;
        cin >> x >> y >> z;

        long long mx = max({x, y, z});

        // Maximum must occur at least twice
        if ((x == mx && y == mx) ||
            (x == mx && z == mx) ||
            (y == mx && z == mx)) {

            cout << "YES\n";

            if (x == mx && y == mx) {
                // x = max(a,b), y = max(a,c)
                // z = max(b,c) = mx
                cout << x << " " << z << " " << y << "\n";
            }
            else if (x == mx && z == mx) {
                // x = max(a,b), z = max(b,c)
                cout << x << " " << y << " " << z << "\n";
            }
            else {
                // y = max(a,c), z = max(b,c)
                cout << y << " " << x << " " << z << "\n";
            }
        }
        else {
            cout << "NO\n";
        }
    }

}
