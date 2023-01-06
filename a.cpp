#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    
    

    while(t-->0){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s.size()!=5){
            cout<<"NO"<<endl;
        }
       else{
         string test="Timru";
        sort(s.begin(),s.end());
        if(test==s){
            cout<< "YES"<<endl;
        }
        else{
            cout<< "NO"<<endl;
        }
       }

    }
    return 0;
}