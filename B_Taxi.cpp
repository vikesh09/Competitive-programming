#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;
void solve(){
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt1=0,cnt2=0,cnt3=0,cnt4=0; int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            cnt1++;
        }
        else if(a[i]==2){
            cnt2++;
        }
        else if(a[i]==3){
            cnt3++;
        }
        else{
            cnt4++;
        }
    }
    ans+=cnt4;
    ans += cnt3;
    cnt1 -= cnt3;
    if(cnt1 < 0) cnt1 = 0;
    ans += cnt2 / 2;
    cnt2 = cnt2 % 2;
    if(cnt2){
        ans++;
        cnt1 -= 2;
        if(cnt1 < 0) cnt1 = 0;
    }
    ans += (cnt1 + 3) / 4;
    cout<<ans<<endl;

   

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
}
