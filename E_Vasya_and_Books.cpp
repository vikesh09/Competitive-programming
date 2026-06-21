#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
#define endl "\n"
#define vl vector <long long>
#define vi vector <int>

using namespace std;

void solve(){
    int n; cin>>n;
    vi a(n);
    vi p(n+1);
    for(int i=0;i<n;i++){
        cin>>a[i];
        p[a[i]]=i;
    }
    int last=-1;
    for(int i=0;i<n;i++){
        int b; cin>>b;
        int c_p=p[b];
        if(c_p>last){
            cout<<(c_p-last)<<(i==n-1?"":" ");
            last=c_p;
        }
        else{
            cout<<0<<(i==n-1?"":" ");

        }
    }
    cout<<endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}