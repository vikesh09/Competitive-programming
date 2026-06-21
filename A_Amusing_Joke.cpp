#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
#define s string
#define vvi vector<vector<int>>
using namespace std;

void solve(){
    s a,b,c; cin>>a>>b>>c;
    vi f(26,0);
    for(char ch:a){
        f[ch-'A']++;
    }
    for(char ch:b){
        f[ch-'A']++;
    }
    for(char ch:c){
        f[ch-'A']--;
    }
    for(int i=0;i<26;i++){
        if(f[i]!=0){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES"<<endl;
    

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    
}