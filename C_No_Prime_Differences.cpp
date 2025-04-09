#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,m;
cin>>t;
while (t-- &&cin>>n>>m)
{
    int a[n][m];
    int x=1;
    for (size_t i = 1; i < n; i+=2)
    {
        for (size_t j = 0; j < m; j++)
        {
            a[i][j]=x;
            x++;
        }
        
    }
    for (size_t i = 0; i < n; i+=2)
    {
        for (size_t j = 0; j < m; j++)
        {
            a[i][j]=x;
            x++;
        }
        
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
 return 0;
}