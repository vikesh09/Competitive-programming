#include<iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        long long totalcost = 0;
        for (int i = 1; i <= N; i++) {
            long long Ai;
            cin >> Ai;
            totalcost += i * Ai;
        }
        cout << totalcost << "\n";
    }
    
}