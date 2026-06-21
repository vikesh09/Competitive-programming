#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>

#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
#define s string
#define vvi vector<vector<int>>

using namespace std;

void solve(){
   int n; cin>>n;
   vi a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   int l=0,r=n-1;
   int sereja=0; int dima=0;
   bool turn=0;
   while(l <=r){
    if(a[l]>a[r]){
        if(turn==0) sereja+=a[l];
        else dima+=a[l];
        l++;
    }
    else{
        if(turn==0){
            sereja+=a[r];
        }
        else dima+=a[r];
        r--;
    }
    turn=!turn;

   }
   cout<<sereja<<" "<<dima<<endl;
   


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    
}