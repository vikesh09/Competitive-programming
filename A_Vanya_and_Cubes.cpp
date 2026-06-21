#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define endl "\n"

using namespace std;

void solve(){
    int n; cin>>n;
    int level=1;
    int height=0;
    while(true){
        int cubes= level*(level+1)/2;
        if(n>= cubes){
            n-=cubes;
            height++;
            level++;
        }
        else{
            break;

        }


    }
    cout<<height<<endl;

    
   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
