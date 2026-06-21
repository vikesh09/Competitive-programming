#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>

#define ll long long
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(n%7==0) cout<<n<<"\n";
        else{
            int ans=-1;
            for(int i=0;i<10;i++){
                int x= (n - n % 10 + i); 
                if(x % 7 == 0){
                    ans=x;
                    break;
                }
            
            }
            cout<<ans<<"\n";
        }

    }
    
}