#include <iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

int main(){
    int n,x; cin>>n>>x;
    vector<int> arr;
    int count=0;
    for(int i=min(n,x);i>= 1;i--){
        if(n%i==0 && x%i==0){
            cout<<i;
            break;
        }
    }
    
    
  
}

