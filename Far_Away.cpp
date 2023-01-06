#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int t;
    cin>>t;
    
    

    while(t-->0){
       
       int n,m,ans;
       cin>>n>>m;
       vector<int> v(n);
       for(int i=0;i<n;i++){
        cin>>v[i];
        int ma=max(abs(v[i]-1),abs(v[i]-m));
        ans +=ma;
       }
       cout<<ans<<endl;
       

    }
    return 0;
}