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
    string n; cin>>n;
    int cnt=0;
    for(char c: n){
        if(c=='4' || c=='7'){
            cnt++;
        }
    }
    if(cnt==0){
        cout<<"NO";
        return;
    }
    while(cnt>0){
        int digit=cnt%10;
        if(digit!=4 && digit!=7){
            cout<<"NO";
            return;
        }
        cnt/=10;
    }
    cout<<"YES"<<endl;
    
}




int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    
}
