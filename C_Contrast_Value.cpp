#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,x;
cin>>t;

while (t--&&cin>>n)
{
    cin>>x;
    n--;
    int r=x,v,u=-4,c=1;
    while(n--)
    {
        cin>>x;
        if(r<x)v=1;
        else if(r>x)v=-1;
        else continue;
        if(u!=v)c++;
        u=v;
        r=x;
    }
    cout<<c<<endl;
}
 return 0;
}