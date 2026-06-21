#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define long long ll
#define endl "\n"
using namespace std;    

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    float z= sum/100.0;
    cout<<(z/n)*100;

}

int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

}