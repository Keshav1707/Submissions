#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,m;
cin>>t;
while (t--&&cin>>n>>m)
{
    int x,y=0,f=0;
    int a[3*n];
    for (size_t i = 0; i < 3*n; i++)cin>>a[i];
    if(m==0){cout<<"Yes"<<endl;break;}
    for (size_t i = 0; i < 3*n; i++)
    {
        
        y=y|a[i];
        if(y==m){cout<<"Yes"<<endl;f=1;break;}
    }
    if(f==0)
    cout<<"No"<<endl;
}
 return 0;
}