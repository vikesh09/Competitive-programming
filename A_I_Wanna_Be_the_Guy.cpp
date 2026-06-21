#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<set>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;

void solve(){
    int n; cin >> n;
    set<int> levels;

    int p, x;
    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> x;
        levels.insert(x);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> x;
        levels.insert(x);
    }

    if (levels.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
