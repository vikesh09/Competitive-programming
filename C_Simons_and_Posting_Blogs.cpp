#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
#define s string
#define vvi vector<vector<int>>
using namespace std;

void solve(){
    int n; cin>>n;
    vvi b(n);
    for(int i=0;i<n;i++){
        int l; cin>>l;
        vi temp(l);
        for(int j=0;j<l;j++){
            cin>>temp[j];
        }
        set<int> seen;
        for(int j=l-1;j>=0;j--){
            if(seen.find(temp[j])== seen.end()){
                b[i].push_back(temp[j]);
                seen.insert(temp[j]);
            }

        }
    }

    
    sort(b.begin(), b.end());

    vi final_q;
    set<int> added;
    
    for(int i = 0; i < n; i++){
        for(int user : b[i]){
            if(added.find(user) == added.end()){
                final_q.push_back(user);
                added.insert(user);
            }
        }
    }

    for (int i = 0; i < final_q.size(); i++) {
        cout << final_q[i] << (i == final_q.size() - 1 ? "" : " ");
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();

    }
    
}