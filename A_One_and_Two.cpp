#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long
#define endl "\n"

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int cnt2 = 0;
        for (int x : a) if (x == 2) cnt2++;

        if (cnt2 % 2 != 0) {
            cout << -1 << "\n";
            continue;
        }

        int need = cnt2 / 2;
        int pref2 = 0;
        bool found = false;

        for (int i = 0; i < n - 1; i++){ 
            if (a[i] == 2) pref2++;
            if (pref2 == need) {
                cout << i + 1 << "\n";
                found = true;
                break;
            }
        }

        if (!found) cout << -1 << "\n";
    }
    
}
