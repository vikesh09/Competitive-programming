#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;
void solve(){
    int n,m; 
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            int x; cin>>x;
            if(x==1){
                n=i;
                m=j;
            }
        }
    }
    cout<<abs(n-3)+abs(m-3)<<endl;
   

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
