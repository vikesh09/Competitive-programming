#include<iostream>
#include<cmath>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        
        for(int k=2;k<=30 ;k++){
            int sum=pow(2,k)-1;
            if(n%sum==0){
                cout<<n/sum<<"\n";
                break;
            }
            
        } 
        
    }
    
    
}


 