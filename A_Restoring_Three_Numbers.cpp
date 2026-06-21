#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>
#include <limits>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>

#define ll long long
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> x(4);
    for(int i = 0; i < 4; i++) {
        cin >> x[i];
    }

    sort(x.begin(), x.end());
    int a= x[3]-x[2];
    int b= x[3]-x[1];
    int c= x[3]-x[0];
    cout<<a<<" "<<b<<" "<<c<<"\n";
    return 0;
}
