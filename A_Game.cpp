#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#include<set>
#include <numeric>
#include <iomanip>
#include<algorithm>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;


void solve(){
    int k; cin>>k;
    int a1,b1,a2,b2; cin>>a1>>b1>>a2>>b2;

    int aliceScore = a1 + a2;
    int bobScore = b1 + b2;
    int aliceRounds = 0;
    int bobRounds = 0;
    if (a1 > b1) aliceRounds++;
    else bobRounds++;

    if (a2 > b2) aliceRounds++;
    else bobRounds++;
    for (int a3 = 0; a3 <= k; a3++) {
        for (int b3 = 0; b3 <= k; b3++) {

            if (a3 == b3) continue;

            int A = aliceScore + a3;
            int B = bobScore + b3;

            int ar = aliceRounds;
            int br = bobRounds;

            if (a3 > b3) ar++;
            else br++;

            if (B > A || (B == A && br > ar)) {
                cout << "YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;




    

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
    
}
