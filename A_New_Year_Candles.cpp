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
  int x,y; cin>>x>>y;
  int h=0;
  int s=0;
  while(x>0){
    x--;
    h++;
    s++;
    if(s>=y){
        x+=s/y;
        s%=y;
    }

  }
  cout<<h<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}