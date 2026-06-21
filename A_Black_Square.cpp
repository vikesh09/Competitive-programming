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
   int a,b,c,d; cin>>a>>b>>c>>d;
   string s; cin>>s;
   int ans=0;
   for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
        ans+=a;
    }
    else if(s[i]=='2') ans+=b;
    else if(s[i]=='3') ans+=c;
    else if(s[i]=='4') ans+=d;
   }
   cout<<ans<<endl;


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
