#include <iostream>
#include <string>
using namespace std;

#define ll long long

const ll MOD = 998244353;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    ll ans = 0;
    for (int first = 0; first <= 1; first++)
    {
        for (int second = 0; second <= 1; second++)
        {
            bool ok = true;

            int prev2 = first;
            int prev1 = second;
            if (s[0] != '?' && s[0] - '0' != first)
                ok = false;

            if (s[1] != '?' && s[1] - '0' != second)
                ok = false;

            for (int i = 2; i < n && ok; i++){
                int cur = 1 - prev2;

                if (s[i] != '?' && s[i] - '0' != cur)
                {
                    ok = false;
                    break;
                }

                prev2 = prev1;
                prev1 = cur;
            }

            if (ok)
                ans++;
        }
    }

    cout << ans << '\n';
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