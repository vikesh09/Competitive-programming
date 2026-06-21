#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define s string
using namespace std;

void solve(){
   int n; cin>>n;
   s r; cin>>r;
   int a = 0, b = 0, c = 0, d = 0;
   for(char ch: r){
    if(ch=='A'){
        a++;
    }
    else if(ch=='B') {
        b++;
    }
    else if(ch=='C'){
        c++;
    }
    else if(ch=='D'){
        d++;
    }
   }
   int a1= min(a,n); int b1= min(b,n); int c1= min(c,n); int d1= min(d,n);
   int ans= (a1+b1+c1+d1);
   cout<<ans<<endl;

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
    
}