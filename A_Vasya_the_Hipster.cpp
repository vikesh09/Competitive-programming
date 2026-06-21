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
    int a,b; cin>>a>>b;
    if((a-b)<0) cout<<min(a,b)<<" "<<(b-a)/2;
    else{
        cout<<min(a,b)<<" "<<(a-b)/2;
    }
    
}