#include <iostream>
using namespace std;
void print( ){
    
    for(int i=0;i<=5;i++){
        int count=1;
        for(int j=0;j<i;j++){
            count+=j;
            cout<<count;
        }
        cout<<endl;
    }
}

int main(){
    
    print();
    
    
}

