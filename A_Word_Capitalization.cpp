#include<iostream>
using namespace std;

int main() {
    ios:: sync_with_stdio(0);
    cin.tie(0);
    string word; cin>>word;
    if(word[0]>='a' && word[0]<='z'){
        word[0]=word[0]-('a'-'A');
    }
    cout<<word<<endl;   

    

}