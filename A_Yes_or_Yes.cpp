#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>
#include <limits>
#define ll long long


using namespace std;

void solve() {
    string s="VIKESH";
    int n= s.length();
    for(int i=0; i<=n;i++){
        for(int j=0; j<i;j++){
            cout<<s[j];
        }
        cout<<"\n";
    }
    
        
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    
    
    
}