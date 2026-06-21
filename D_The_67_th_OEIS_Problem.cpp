#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
const int MAX_PRIME = 200000;
using namespace std;

vector<int> primes;
void s1(){
    vector<bool> is_prime(MAX_PRIME,true);
    for(int i=2;i*i<MAX_PRIME;i++){
        if(is_prime[i]){
            for(int j =i*i;j<MAX_PRIME;j+=i){
                is_prime[j]= false;
            }
            
        }

    }
    for(int i=2;i<MAX_PRIME;i++){
        if(is_prime[i]){
            primes.push_back(i);
        }
    }

}
void solve(){
  int n; cin>>n;
  for(int i=0;i<n;i++){
    cout<<(ll)primes[i]*primes[i+1]<<(i==n-1?"":" ");
  }
  cout<<endl;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    s1();
    int t; cin>>t;
    while(t--){
        solve();
    }
    
}
