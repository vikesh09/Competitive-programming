#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(n==2){
            cout<<"Alice"<<endl;
        }
        else if(n%4==0){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
        
    }
}