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
  int n,k; cin>>n>>k;
  char ch;
  for(int i=0;i<n;i++){
    for(int j=0;j<k;j++){
        cin>>ch;
        if(ch=='C' || ch=='M' || ch=='Y'){
            cout<<"#Color"<<endl;
            return;
        }
    }

  }
  cout<<"#Black&White"<<endl;

  
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}