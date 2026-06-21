#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
#define endl "\n"

using namespace std;
void solve(){
    int a,b,c; cin>>a>>b>>c;
    int p= a+(b*c);
    int q= a*(b+c);
    int r= (a+b)*c;
    int t= (a*b)+c;
    int m= a*b*c;
    int n= a+b+c;
    int ans1= max(max(p,q),max(r,t));
    int ans2= max(max(m,n),ans1);
    cout<<ans2<<endl;
    

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}