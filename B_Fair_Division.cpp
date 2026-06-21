#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;

void solve(){
    int n; cin>>n;
    vi a(n); 
    int sum=0; int cnt1=0; int cnt2=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]==1){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }
    if(sum%2!=0){
        cout<<"NO"<<endl;
    }
    else{
        if((sum/2)%2!=0 && cnt1==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }



   

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
