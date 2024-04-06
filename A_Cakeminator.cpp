#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m,x=0;
cin>>n>>m;
char a[n][m];
for (size_t i = 0; i < n; i++)
{
    for (size_t j = 0; j < m; j++)
    {
        cin >> a[i][j];
        if(a[i][j]=='S')x=0;
        else x++;
    }
    if(x==m)
    {  
        for (size_t j = 0; j < m; j++)a[i][j]='0';
    }
    x=0;
}
for (size_t i = 0; i < m; i++)
{
    for (size_t j = 0; j < n; j++)
    {
      if(a[j][i]=='S')x=0;
      else x++;  
        
    }
    
    if(x==n)
    {
      for (size_t j = 0; j < n; j++)a[j][i]='0';  
    }
    x=0;
}
for (size_t i = 0; i < n ; i++)
{
    for (size_t j = 0; j < m; j++)
    {
        //cout<<a[i][j]<<" ";
        if(a[i][j]=='0')x++;
        
        
    }
    //cout<<endl;
}

cout<<x<<endl;
return 0;
}