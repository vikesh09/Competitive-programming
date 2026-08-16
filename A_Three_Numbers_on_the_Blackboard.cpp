#include <iostream>
#include <string>
using namespace std;

#define ll long long

const ll MOD = 998244353;

void solve(){
    long long a, b, c;
    cin >> a >> b >> c;

        
    vector<long long> v = {a, b, c};
    sort(v.begin(), v.end());
    long long x = v[0];
    long long y = v[1];
    long long z = v[2];
    cout << min(z - x, y) << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}