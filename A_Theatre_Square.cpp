#include <bits/stdc++.h>
using namespace std;
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
 
 
# define ll long long
# define vi vector<int>
# define vl vector<ll>
# define vc vector<char>
# define vb vector<bool>
# define vvc vector<vector<char>>
# define vvi vector<vector<int>>
# define vvl vector<vector<ll>>
# define vvb vector<vector<bool>>
# define pii pair<int,int>
# define pll pair<ll,ll>
# define vpii vector<pii>
# define endl "\n"
 
template<class n> inline bool chmin(n& base, n b) {
    if (base > b) { base = b; return true;}
    return false;
}
template<class n> inline bool chmax(n& base, n b) {
    if (base < b) { base = b; return true;}
    return false;
}
 
ll MOD = 1e9 + 7;
ll MOD2 = 998244353;
ll INF = 1e18;
const int MAX_N = 1e6 + 10;
 
 
void solve() {
    int k, x; cin>>k>>x;
    cout<<(k * x) + 1<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(cin.failbit);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}