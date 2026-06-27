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
 int s1,s2,s3,s4; cin>>s1>>s2>>s3>>s4;
 int a= max(s1,s2);
 int b= max(s4,s3);
 vi v ={s1,s2,s3,s4};
 sort(v.begin(),v.end());
 if((a==v[3] && b== v[2]) || (a==v[2] && b==v[3])){
    cout<<"YES"<<endl;
 }
 else{
    cout<<"NO"<<endl;
    
 }

 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}