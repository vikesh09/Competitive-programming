#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

#define ll long long
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    if(n>2) cout<<(pow(n,2)-2);
    else if(n==1) cout<<n;
    else cout<<(n+1);
}