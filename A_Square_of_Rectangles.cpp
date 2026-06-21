#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l1,b1,l2,b2,l3,b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

        long long area = l1*b1 + l2*b2 + l3*b3;
        long long S = sqrt(area);
        if (S*S != area) {
            cout << "NO\n";
            continue;
        }

        bool ok = false;

        
        vector<pair<long long,long long>> rects = {{l1,b1},{l2,b2},{l3,b3}};
        sort(rects.rbegin(), rects.rend());

        
        auto [L1,B1] = rects[0];
        auto [L2,B2] = rects[1];
        auto [L3,B3] = rects[2];
        
        if (L1 == S) {
            if (B1 + max(B2,B3) == S) {
                if ((L2 == S - L3 && B2 + B3 == B1) || (L2 + L3 == S && B2 == B3 && B1 + B2 == S)) ok = true;
                else if (B2 + B3 == S && max(L2,L3) == S - L1) ok = true;
            }
            if (B1 + B2 + B3 == S && max(L2,L3) == S) ok = true;
        }

        if (B1 == S) {
            if (L1 + max(L2,L3) == S) {
                if ((B2 == S - B3 && L2 + L3 == L1) || (B2 + B3 == S && L2 == L3 && L1 + L2 == S)) ok = true;
                else if (L2 + L3 == S && max(B2,B3) == S - B1) ok = true;
            }
            if (L1 + L2 + L3 == S && max(B2,B3) == S) ok = true;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}
