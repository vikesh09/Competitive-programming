#include<iostream>
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
    int n; cin>>n;
    int sumX=0 ; int sumY=0; int sumZ=0;
    for(int i=0;i<n;i++){
        int x,y,z; cin>>x>>y>>z;
        sumX+=x;
        sumY+=y;
        sumZ+=z;
    }
    if( sumX==0 && sumY==0 && sumZ==0)
        cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}




