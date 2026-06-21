#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;
void solve(){
   int n; cin>>n;
   vi a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   int cnt=1; int m=1;
   for(int i=0;i<n-1;i++){
    if(a[i] <= a[i+1]){
        cnt++;
    }
    else{
        cnt=1;
    }
    m=max(m,cnt);
   }
   cout<<m<<endl;
    

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
