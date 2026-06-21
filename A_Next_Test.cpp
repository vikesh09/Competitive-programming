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
void solve(){
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int maxe=1;
    for(int i=0;i<n;i++){
        if(a[i]==maxe){
            maxe++;
        }
    }
    cout<<maxe<<endl;

  
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    
}
