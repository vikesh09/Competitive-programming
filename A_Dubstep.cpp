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
    string s; cin>>s;
    for(int i=0;i<s.size();){
        if(i+2 <s.size() && s.substr(i,3)=="WUB"){
            cout<<" ";
            i+=3;
        }
        else{
            cout<<s[i];
            i++;
        }
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
