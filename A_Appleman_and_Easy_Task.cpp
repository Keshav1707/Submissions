#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
char a[t+2][t+2]={0};
for (size_t i = 1; i <= t; i++)
{
    for (size_t j = 1; j <= t; j++)
    {
        cin>>a[i][j];
    }
    
}

for (size_t i = 1; i <= t; i++)
{
    for (size_t j = 1; j <= t; j++)
    {
        int c=0;
        if(a[i][j+1]=='o')c++;
        if(a[i][j-1]=='o')c++;
        if(a[i-1][j]=='o')c++;
        if(a[i+1][j]=='o')c++;
        //cout<<c<<" ";
        if(c%2!=0){cout<<"NO";return 0;}
    }
    //cout<<endl;
}
cout<<"YES";
 return 0;
}