#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>
#include <limits>
#define ll long long
using namespace std;

void solve(){
    int n,h; cin>>n>>h;
    int count=0;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        if(a>h) count+=2;
        else count+=1;
    }
    cout<<count<<"\n";

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
}