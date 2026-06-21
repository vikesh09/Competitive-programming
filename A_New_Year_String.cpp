#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>
#include <limits>
#define ll long long
using namespace std;

void check()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool has2026 = false, has2025 = false;
    for (int i = 0; i + 3 < n; i++)
    {
        if (s.substr(i, 4) == "2026")
            has2026 = true;
        if (s.substr(i, 4) == "2025")
            has2025 = true;
    }
    if (has2026 || !has2025)
    {
        cout << 0 << "\n";
        return;
    }

    int make2026 = INT_MAX;
    string target = "2026";
    for (int i = 0; i + 3 < n; i++)
    {
        int diff = 0;
        for (int j = 0; j < 4; j++)
        {
            if (s[i + j] != target[j])
                diff++;
        }
        make2026 = min(make2026, diff);
    }

    int remove2025 = 0;
    for (int i = 0; i + 3 < n; i++)
    {
        if (s.substr(i, 4) == "2025")
        {
            remove2025++;
            i += 3;
        }
    }
    cout << min(make2026, remove2025) << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        check();
    }
    
}