#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
#define s string
using namespace std;

void solve(){
    int n; cin>>n;
    vi p(n);
    int pos1=-1; int posN=-1;
    for(int i=0;i<n;i++){
        cin>>p[i];
        if(p[i]==1) pos1=i;
        if(p[i]==n) posN=i;
    }
    auto count_ugly=[&](const vi& q){
        int count=0, cur_max=0;
        for(int k=0;k<n;k++){
            cur_max=max(cur_max,q[k]);
            if(cur_max==(k+1)) count++;
        }
        return count;
    };
    int m_ugly=count_ugly(p);
    vi ans=p;
    vi cand={pos1,posN};

    for(int idx: cand){
        for(int i=0;i<n;i++){
            if(idx==1) continue;
            swap(p[idx],p[i]);
            int current=count_ugly(p);
            if(current<m_ugly){
                m_ugly=current;
                ans=p;
            }
            swap(p[idx],p[i]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<(i==n-1?"":" ");
    }
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();

    }
    
}