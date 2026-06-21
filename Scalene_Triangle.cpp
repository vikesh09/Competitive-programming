#include<iostream>
using namespace std;

int main() {
    ios:: sync_with_stdio(0);
    cin.tie(0);
    for(int i=0; i<5;i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<endl;
    }
    

}