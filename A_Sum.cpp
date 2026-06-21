#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>
#include <limits>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#define ll long long
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int a,b,c; cin>>a>>b>>c;
        if((a==b+c) || (b==a+c) || (c==b+a)) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    
}