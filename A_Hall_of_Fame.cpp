#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
  while(t--){
    int tro;
    string s;
    cin>>tro;
    cin>>s;
    int ans=-1;
    for (int i = 0; i < s.size()-1; i++)
    {
        if(s[i]=='L'&& s[i+1]=='R'){
            ans=i+1;
        }
        if(s[i]=='R'&& s[i+1]=='L'){
            ans=0;
        }
    }
    cout<<ans<<endl;
    
  }
    

    return 0;
    }