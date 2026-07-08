#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <unordered_map>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve() {
   int n; cin>>n;
   vi a(7);
   for(int i=0;i<7;i++){
    cin>>a[i];
   }
   int sum=0;
   while(true){
    for(int i=0;i<7;i++){
        n-=a[i];
        if(n<=0){
            cout<<i+1<<endl;
            return;
        }
   }
   }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}