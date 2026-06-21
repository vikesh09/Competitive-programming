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
     int s,n; cin>>s>>n;

     vector<pair<int,int>> dragons(n);

    for(int i=0;i<n;i++){
        cin>>dragons[i].first>>dragons[i].second;
    }

    sort(dragons.begin(),dragons.end());

    for(int i=0;i<n;i++){
        if(s > dragons[i].first){
            s += dragons[i].second;
        }
        else{
            cout<<"NO";
            return;
        }
    }

    cout<<"YES";
   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    
}