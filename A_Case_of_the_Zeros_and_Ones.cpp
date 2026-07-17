#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <numeric>
#include <unordered_map>
#include <queue>
#include<stack>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    stack<char>st;
    for(char ch:s){
        if(!st.empty() && st.top()!=ch){
            st.pop();
        }
        else{
            st.push(ch);

        }
    }
    cout<<st.size()<<endl;

   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}