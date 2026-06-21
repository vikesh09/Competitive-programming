#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
#define endl "\n"


using namespace std;

void solve() {
    int n; cin>>n;

    int m = 0; int current = 0;
    for(int i = 0; i < n; i++){
        int val; cin>>val;
        if(val == 0){
            current++;
        }
        else{
            m= max(m, current);
            current= 0;
        }
    }
    
    m=max(m, current);
    cout<<m<<endl;
    
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}