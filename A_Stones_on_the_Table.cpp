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
    int n; cin >> n;
    string s; cin >> s;

    int cnt = 0;
    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
   

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
