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

struct Trie{
    int ch[2];
    Trie(){ ch[0] = ch[1] = -1; }
};

vector<Trie> trie;

void insert(ll x){
    int cur = 0;
    for(int i = 29; i >= 0; i--){
        int b = (x >> i) & 1;
        if(trie[cur].ch[b] == -1){
            trie[cur].ch[b] = trie.size();
            trie.push_back(Trie());
        }
        cur = trie[cur].ch[b];
    }
}

ll query(ll x){
    int cur = 0;
    ll ans = 0;
    for(int i = 29; i >= 0; i--){
        int b = (x >> i) & 1;
        int want = 1 - b;
        if(trie[cur].ch[want] != -1){
            ans |= (1LL << i);
            cur = trie[cur].ch[want];
        } 
        else{
            cur = trie[cur].ch[b];
        }
    }
    return ans;
}

void solve(){
    int n; cin >> n;
    vl a(n);
    for(auto& x : a) cin >> x;

    trie.clear();
    trie.push_back(Trie());
    for(auto x : a) insert(x);

    ll ans = 0;
    for(auto x : a) ans = max(ans, query(x));

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
    
}
