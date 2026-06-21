#include <iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k; cin>>n>>k;
    int c= (240-k);
    int count=0; int solved=0;
    for(int i=1;i<=n;i++){
        count+=5*i;
        if(count > c) break;
        solved++;
    }
    cout<<solved;
    
    
  
}

