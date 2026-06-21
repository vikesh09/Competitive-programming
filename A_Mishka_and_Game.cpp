#include <iostream>
#include<vector>
#include<string>
#include <algorithm>
#include <cmath>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <list>
#include <bitset>
#include <numeric>
#include <iomanip>
#include <climits>
#include <cfloat>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <fstream>
#include <sstream>
#include <functional>
#include <iterator>
#include <utility>
#include <tuple>
#include <array>
#define ll long long
#define endl "\n"
#define vi vector<int>
#define vl vector<long long>
using namespace std;


int main() {
    int n;
    cin >> n;

    int mishka = 0, chris = 0;

    while (n--) {
        int m, c;
        cin >> m >> c;

        if (m > c) {
            mishka++;
        } 
        else if (c > m) {
            chris++;
        }
    }

    if (mishka > chris) {
        cout << "Mishka"<<endl;
    }
    else if (chris > mishka) {
        cout << "Chris"<<endl;
    }
    else {
        cout << "Friendship is magic!^^"<<endl;
    }

    return 0;
}