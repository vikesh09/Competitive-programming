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
    int n; cin>>n;
    s r; cin>>r;
    int cnt=0;
    for(int i=0;i<r.size();i++){
        if(r[i]=='A'){
            cnt++;
            continue;
        }
    }
    int cnt2= r.size()-cnt;
    if(cnt>cnt2) cout<<"Anton"<<endl;
    else if(cnt<cnt2) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;

   
    

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}