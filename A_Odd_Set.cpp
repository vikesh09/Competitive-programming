#include<iostream>
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

	int t; cin>>t;
	while(t--){
		int n,cnt[2]={0}; cin>>n;
		for(int i=1,x;i<=n*2;i++) cin>>x,cnt[x%2]++;

		if(cnt[0]==n)puts("Yes");
        
		else puts("No");
	}
	return 0;
}