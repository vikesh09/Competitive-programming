#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>

using namespace std;
bool isSorted(vi &a)
{
    int n = a.size();
    bool inc = true, dec = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[i + 1])
            inc = false;
        if (a[i] < a[i + 1])
            dec = false;
    }
    return inc || dec;
}

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n < 3)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j <= min(i + 5, n - 1); j++)
        {
            if (a[i] != a[j])
            {
                swap(a[i], a[j]);
                if (!isSorted(a))
                {
                    cout << i + 1 << " " << j + 1 << endl;
                    return;
                }
                swap(a[i], a[j]);
            }
        }
    }

    cout << -1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
