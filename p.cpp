#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int x; cin>>x;
        long long sum = 0;
        for (int i = 1; i <= n; i++) {
            int sign = (i % 2 == 0 ? 1 : -1);   
            sum += sign * x;
            cout<<sum<<" ";
        }


    }
}