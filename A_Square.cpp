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
    vi x(4), y(4);
    for(int i=0;i<4;i++){
        cin>>x[i]>>y[i];
    }
    int mine= *min_element(x.begin(),x.end());
    int maxe= *max_element(x.begin(),x.end());
    int side= maxe- mine;
    cout<<side*side<<endl;
   

  
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
    
}
