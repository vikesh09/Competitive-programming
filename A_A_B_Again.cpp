#include<iostream>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(n>=10 || n<=99){
            cout<<(n/10)+(n%10)<<"\n";
        }
    }
    
}
