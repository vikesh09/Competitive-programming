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
    int x=0;
    while(n--){
        string s; cin>>s;
        if(s[1]=='+'){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
