#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,m,k,x,y;
cin>>t;
while (t--&&cin>>n>>m>>k>>x>>y)
{
    int xa,ya,f=0;
    while(k--&&cin>>xa>>ya)
    {
        if(abs(xa-x)+abs(ya-y)%2==0)f++;
    }
    //cout<<f<<endl;
    f==0?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
 return 0;
}