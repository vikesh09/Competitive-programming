#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int N,A,B; cin>>N>>A>>B;
        
        for(int i=0;i<=N;i++){
            vector<int> a(N);
	        for(int i=0;i<N;i++){
	            cin>>a[i];
	        }
            int ans=0;
	        
	        for(int i=0;i<N;i++){
	            if(a[i]<A){
	                ans+=1;
	            }
	        }
            cout<<ans<<"\n";
            
        }
        
	}
	

}
