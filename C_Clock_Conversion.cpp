#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <unordered_map>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve(){
    string s; cin>>s;
    int h = stoi(s.substr(0, 2));
    string mn = s.substr(3, 2);
    if(h==0){
        cout<<"12:"<<mn<<" AM"<<endl;
    }
    else if(h<12){
        cout<<s<<" AM"<<endl;
    }
    else if(h==12){
        cout<<s<<" PM"<<endl;
    }
    else{
        h-=12;
        if(h<10){
            cout<<"0";
        }
        cout<<h<<":"<<mn<<" PM"<<endl;
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}