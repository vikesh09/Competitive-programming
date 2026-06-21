#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
#define s string
#define vvi vector<vector<int>>

using namespace std;

void solve(){
    int n; cin>>n;
    
     if(n%4==0 || n%7==0 || n%44==0 || n%47==0 || 
       n%74==0 || n%77==0 || n%444==0 || n%447==0 ||
       n%474==0 || n%477==0 || n%744==0 || 
       n%747==0 || n%774==0 || n%777==0)
        cout<<"YES";
    else
        cout<<"NO";

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    
}