#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve() {
  int n; cin>>n;
  vi a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  vector<vector<bool>> good(n, vector<bool>(n,false));
  vector<vector<int>> mnv(n, vector<int>(n,0));
  vector<vector<int>> mxv(n, vector<int>(n,0));
  
  for(int i=0;i<n;i++){
    vi freq(n+1,0);
    int mx= a[i];
    int mn=a[i];
    for(int j=i;j<n;j++){
        freq[a[j]]++;
        if(freq[a[j]]>1) break;
        mx=max(mx,a[j]);
        mn=min(mn,a[j]);
        int len= j-i+1;
        if(mx-mn+1==len){
            good[i][j]=true;
            mnv[i][j] = mn;
            mxv[i][j] = mx;
        }
    }
  }
  
  for(int l=n/2;l>=1;l--){
    for(int i=0;i+l-1<n;i++){
        if(!good[i][i+l-1]) continue;
        
        for(int j=i+l;j+l-1<n;j++){
            if(!good[j][j+l-1]) continue;  
            
            int totalMin = min(mnv[i][i+l-1], mnv[j][j+l-1]);
            int totalMax = max(mxv[i][i+l-1], mxv[j][j+l-1]);
            if(totalMax-totalMin+1==2*l){
                cout<<l<<endl;
                return;
            }
        }
    }
  }
  cout<<0<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}