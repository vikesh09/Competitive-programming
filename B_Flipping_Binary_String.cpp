#include<iostream>
#include<vector>
using namespace std;
vector<int>bin2(string s,int n){
    vector<int>temp;
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            temp.push_back(i+1);
        }
    }
    return temp;
}            
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int sum=0;
        int flag=0;
        int cnt=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                flag=1;
                cnt++;
            }    
            sum+=s[i]-48;
        }
        if(sum%2!=0){
            cout<<-1<<"\n";
            continue;
        }    
        if(flag==0){
            cout<<0<<"\n";
            continue;
        }
        int temp;
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                temp=i+1;
                break;
            }
        }            
        if(flag==1){
            if(n-cnt==1){
                cout<<1<<"\n";
                cout<<temp<<"\n";
            }   
            else{ 
                cout<<cnt<<"\n";
                vector<int>result=bin2(s,n);
                for(int i=0; i<result.size(); i++){
                    cout<<result[i]<<" ";
                }
                cout<<"\n";   
            }    
        }
    }                               
    return 0;
}