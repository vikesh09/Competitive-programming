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
    int n;
    cin >> n;
    
    // Query ? 1 2
    cout << "? 1 2\n"; cout.flush();
    int res; cin >> res;
    if (res == -1) exit(0);
    if (res == 1) { cout << "! 1\n"; cout.flush(); return; }
    
    // cand = 1 (either 1 or 2 is zero, we suspect 1)
    int cand = 1;
    
    for (int i = 2; i <= n; i++) {
        // Query cand vs (2i-1)
        cout << "? " << cand << " " << (2*i-1) << "\n"; cout.flush();
        cin >> res;
        if (res == -1) exit(0);
        
        if (res == 1) {
            // cand == a[2i-1]: they're equal
            // The only value that appears in multiple spots as a "carry" is 0
            // (since all integers 1..n appear exactly once, they can't match
            //  across different pairs unless both are 0)
            cout << "! " << cand << "\n"; cout.flush();
            return;
        }
        
        // cand != a[2i-1]: update candidate to 2i-1
        // Because: if cand=0, then a[2i-1]≠0 means a[2i]=0, so new cand=2i-1 is wrong
        // Hmm...
        cand = 2*i - 1;
    }
    
    // Used n queries, output cand
    cout << "! " << cand << "\n"; cout.flush();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
