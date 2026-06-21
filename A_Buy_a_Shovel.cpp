#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#include<set>
#include <iomanip>
#include<algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;

void solve(){
    int k,r; cin>>k>>r;
    vi a;
    for(int i=1;i<=10;i++){
        if(i*k%10==0 || i*k%10==r){
           a.push_back(i);
        }
    }
    sort(a.begin(),a.end());
    cout<<a[0]<<endl;
  

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
