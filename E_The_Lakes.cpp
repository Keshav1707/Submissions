#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,m,n;
cin>>t;
while (t--&&cin>>m>>n)
{
    int a[m+2][n+2],sum=0;
    for (size_t i = 0; i <= m+1; i++)
     {
         for (size_t j = 0; j <= n+1; j++)
         {
            if(j==0||i==0||j==n+1||i==m+1)
             a[i][j]=0;
            else{
             cin>>a[i][j];
             sum=sum+a[i][j];
            }
             /* code */
         }
        
         /* code */
     }
    for (size_t i = 0; i <= m+1; i++)
    {
        for (size_t j = 0; j <= n+1; j++)
        {
            cout<<a[i][j]<<" ";
            if(a[i][j-1]==0&&a[i][j+1]==0&&a[i-1][j]==0&&a[i+1][j]==0)
                 sum=sum-a[i][j];
             /* code */
        }
        /* code */
        cout<<"\n";
    }
    
    cout<<sum<<endl;
    
}
 return 0;
}