#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;

void solve(){
    int n; cin>>n;
    int sum=0;
    while(n--){
        string s; cin>>s;

        if(s == "Tetrahedron") sum += 4;
        else if(s == "Cube") sum += 6;
        else if(s == "Octahedron") sum += 8;
        else if(s == "Dodecahedron") sum += 12;
        else if(s == "Icosahedron") sum += 20;

    }
    cout<<sum<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
