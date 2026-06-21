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
  int k,l,m,n,d; cin>>k>>l>>m>>n>>d;
  int cnt=0;
  for(int i=1;i<=d;i++){
    if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
        cnt++;
    }
  }
  cout<<cnt<<endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
