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
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,l,c,d,p,nl,np; cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    ll total_drink=k*l;
    ll enough_to_make =total_drink/nl;
    ll limes=c*d;
    ll salt=p/np;
    cout<<min(enough_to_make,min(limes,salt))/n<<"\n";
    return 0;
}