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

const int MAX = 200007;
const int MOD = 1000000007;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int x = 0, y = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'L') {x--;}
		if (s[i] == 'R') {x++;}
		if (s[i] == 'D') {y--;}
		if (s[i] == 'U') {y++;}
		if (x == 1 && y == 1) {cout << "YES\n"; return;}
	}	
	cout << "NO\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t; 
    while(t--){
        solve();
    }
}