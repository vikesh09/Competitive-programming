#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>

using namespace std;

void solve(){
    string line;
    getline(cin,line);
    set<char> ch;
    for(int i=1;i<line.size()-1;i+=3){
        ch.insert(line[i]);
    }
    cout<<ch.size()<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
