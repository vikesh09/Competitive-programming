#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;

void solve(){
   int n; cin>>n;
   string s; cin>>s;
   int cnt=0; int ans=0;
   for(int i=0;i<s.size();i++){
    if(s[i]=='x'){
        cnt++;
        if(cnt>=3){
            ans++;
        }
        else{
            cnt=0;
        }
    }
   }
   cout<<ans<<endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
