#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <numeric>
#include <unordered_map>
#include <queue>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>

using namespace std;

void solve() {
    int n; cin>>n;
    if(n >=0){
        cout<<n<<endl;
    }
    else{
        int a=n/10;
        int b=(n/100)*10+(n%10);
        cout<<max(n,max(a,b))<<endl;
    }
    
   
        
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}