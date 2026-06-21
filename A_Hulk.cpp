#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<math.h>
#define ll long long 
#define endl "\n"

using namespace std;

void solve(){
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==1) cout<<"I hate";
        else cout<<"I love";

        if(i < n) cout << " that ";
        else cout << " it";

    }
}


int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
