#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<numeric>
#include<unordered_map>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve() {
  int w, h, n;
  cin >> w >> h >> n;
  int res = 1;
  while (w % 2 == 0) {
    w /= 2;
    res *= 2;
  }
  while (h % 2 == 0) {
    h /= 2;
    res *= 2;
  }
  cout << (res >= n ? "YES\n" : "NO\n");
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}