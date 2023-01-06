#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    
    
int i=1;
    while(i<=t){
         int m,n,p;
    cin>>m>>n>>p;
    int arr[m+1][n+1];
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <=n ; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int ans=0;
    for (int k = 1; k <=n; k++)
    {   int maxx=0;
        int l=1;
        for (; l <=m; l++)
        {
            maxx=max(maxx,arr[l][k]);
        }
        ans +=max(maxx-arr[p][k],0);
    }
   
    cout<<"Case #"<<i<<": "<<ans<<endl;
    i++;
    }
    return 0;
    }