#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>


using namespace std;

void solve(){
    int n; cin>>n;
    vi h(n),a(n);
    for(int i=0;i<n;i++){
        cin>>h[i]>>a[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(h[i]==a[j]){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}