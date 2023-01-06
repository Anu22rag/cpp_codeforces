#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    int a;
    int b;
    cin>>t;
    cin>>a;
    cin>>b;
    if(t==1){
        if(a==b){
            cout<<1<<endl;
            cout<<a<<":"<<b<<endl;
        }
    }
    
    if((a+b)<t){
        cout<<t-(a+b)<<endl;
        for (int i = 0; i < a; i++)
        {
            cout<<1<<":"<<0<<endl;
        }
        for (int i = 0; i < b; i++)
        {
            cout<<0<<":"<<1<<endl;
        }
        for (int i = 0; i < t-(a+b); i++)
        {
            cout<<0<<":"<<0<<endl;
        }
    }
    if((a+b)>=t &&(a==0 || b==0)){
        cout<<0<<endl;
        //cout<<s<<":"<<c<<endl;
        if(a==0){
          for (int i = 0; i < t-1; i++)
        {
            cout<<0<<":"<<0<<endl;
        }
        }
        
    }
    else{ 
        cout<<t-1<<endl;
        cout<<s<<":"<<c<<endl;
        for (int i = 0; i < t-1; i++)
        {
            cout<<0<<":"<<0<<endl;
        }
        
    }
    

    return 0;
    }