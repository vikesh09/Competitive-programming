#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

const int INF = 1e9;
using namespace std;

void solve(){
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int max=0; int min=0;

    for(int i=0;i<n;i++){
        if(a[i]>a[max]){
            max=i;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]<=a[min]){
            min=i;
        }
    }
    int cnt= max+(n-1-min);
    if(max>min){
        cnt--;
    }
    cout<<cnt<<endl;
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
   
    
}