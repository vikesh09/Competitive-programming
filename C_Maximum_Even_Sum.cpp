#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
using namespace std;    



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> b >> a; 

        long long sol = -1;

        
        if (((a + b) & 1LL) == 0) {
            sol = a + b;
        }

        
        if ((a & 1LL) == 1 && (b & 1LL) == 1) {
            sol = max(sol, a * b + 1);
        }
        
        else if ((a & 1LL) == 0 && ((a % 4 == 0) || (b & 1LL) == 0)) {
            sol = max(sol, 2 + (a * b) / 2);
        }

        cout << sol << '\n';
    }
    return 0;
}


