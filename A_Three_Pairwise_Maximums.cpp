#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#define ll long long
#define endl "\n"
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        ll x,y,z; cin>>x>>y>>z;
        int b= (9-(y+z))/4;
        int a=(1+b);
        int c= (4-3*b);
        if(a==b ||  c==a) cout<<"NO \n";
        else{
            cout<<"YES \n";
            cout<<a<<b<<c<<"\n";
        }

    }
	

}
