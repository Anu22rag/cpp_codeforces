#include<bits/stdc++.h>
#include <iostream>
using namespace std;

    
int main(){
    int t;
    cin>>t;
    
    

    while(t-->0){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1;
        cin>>s2;
       for (int i = 0; i < 2; i++)
       {
        for (int j = 0; j < n; j++)
        {
            if(s1[j]=='G'){
                s1[j]='B';
            }
             if(s2[j]=='G'){
                s2[j]='B';
            }
            
        }
        
       }
       if(s1==s2){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
       
       

    }
    return 0;
}