#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n==3){
        cout<<"NO"<<endl;
    
    }
    else{
        cout<<"YES"<<endl;
        if(n%2==0){
            for (int i = 0; i < n; i++)
            {
                if(i%2==0){
                    cout<<1<<" ";
                }
                else cout<<-1<<" ";
            }
            cout<<endl;
        }
       else{
        int x=1+(n-5)/2;
        for (int i = 0; i < n; i++)
        {
            if(i%2==0){
                cout<<x<<" ";
            }
            else cout<<-x-1<<" ";
        }    
        cout<<endl;    
       }
    }
    
    
  }
    

    return 0;
    }