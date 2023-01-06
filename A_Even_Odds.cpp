#include<bits/stdc++.h>
using namespace std;


int main(){
    long long n,k;
    cin>>n,k;
    long ans=0;
    if(n%2==0){
        if(k<=n/2){
        int ans=1+(k-1)*2;
        cout<<ans;
        }
        if(k>n/2){
         ans=2+(k-n/2)*2;
        cout<<ans;
    }
    }
    else{
       if(k-1<=n/2){
        int ans=1+(k-1)*2;
        cout<<ans;
        }
        if(k-1>n/2){
        ans=2+(k-2-n/2)*2;
        cout<<ans; 
    }
        
    }
    

    return 0;
    }