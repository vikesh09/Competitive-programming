#include <iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        set<int>S;
        
        for(int i = 0; i < n; i++){
            long long x;
            cin >> x;
            S.insert(x);
        }
        
        long long d = S.size();
        
        while(true){
            if(S.count(d)){
                cout << d << "\n";
                break;
            } else {
                S.insert(d);
                d++;
            }
        }
    }
    return 0;
}
