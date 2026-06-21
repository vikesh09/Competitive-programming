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
        int a; cin>>a;
        if (a > 0 && a < 180 && 360 % (180 - a) == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
        
    }
    
}