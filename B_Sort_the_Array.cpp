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
 vi a(n),b;
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 b=a;
 sort(b.begin(),b.end());
 int l=0;
 while(l<n && a[l]==b[l]){
    l++;
 }
 if(l==n){
    cout<<"yes"<<endl;
    cout<<"1 1"<<endl;
    return;
 }
 int r=n-1;
 while(r>=0 && a[r]==b[r]){
    r--;
 }
 reverse(a.begin()+l,a.begin()+r+1);
 if(a==b){
    cout<<"yes"<<endl;
    cout<<l+1<<" "<<r+1<<endl;
 }
 else{
    cout<<"no"<<endl;
 }

  
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}