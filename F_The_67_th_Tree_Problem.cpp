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
void solve() {
    int x, y;
    cin >> x >> y;
    int n = x + y;
    if (x > y || (x == 0 && y % 2 == 0)) {
        cout << "NO"<<endl;
        return;
    }

    cout << "YES"<<endl;

    if (x == 0) {
        for (int i = 2; i <= y; i++)
            cout << 1 << " " << i <<endl;

    } 
    else if (n % 2 == 0) {
        for (int i = 1; i < 2 * x; i++)
            cout << i << " " << (i + 1) <<endl;
        int nxt = 2 * x + 1;
        for (int i = 0; i < y - x; i++)
            cout << 1 << " " << nxt++ <<endl;

    } 
    else {
        for (int i = 1; i <= 2 * x; i++)
            cout << i << " " << (i + 1) <<endl;
        int nxt = 2 * x + 2;
        for (int i = 0; i < y - x - 1; i++)
            cout << 1 << " " << nxt++ << endl;
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
