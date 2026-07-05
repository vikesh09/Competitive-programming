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
   if(n%2==1){
    cout<<-1<<endl;
    return;
   }
   for(int i=1;i<=n;i+=2){
    cout<<i+1<<" "<<i<<" ";
   }
   cout<<endl;
 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}