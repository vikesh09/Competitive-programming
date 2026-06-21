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
  if(n%2==0){
    cout<<4<<" "<<(n-4)<<endl;
  }
  else{
    cout<<9<<" "<<(n-9)<<endl;
  }

  
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}