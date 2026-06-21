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
    vl a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++){
        vector<pair<double, int>> events;
        int count = 0;
        int total = 0;

        for(int j = i + 1; j < n; j++){
            if(a[i] == a[j]) continue;
            total++;
            double mid = (double)(a[i] + a[j]) / 2.0;
            
            if(a[j] > a[i]){
                events.push_back({mid + 0.00001, 1}); 
            } 
            else{
                count++;
                events.push_back({mid - 0.00001, -1});
            }
        }

        sort(events.begin(), events.end());

        int max_j = count;
        for(auto& ev : events){
            count += ev.second;
            max_j = max(max_j, count);
        }

        cout<<max_j<<(i == n - 1 ? "" : " ");
    }
    cout<<endl;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
