#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while (t--&&cin>>n)
{
    int a[n],x,y,z,pos=1;
    for (auto &&i : a)
    {
        cin>>i;
        if(i==1)x=pos;
        if(i==2)y=pos;
        if(i==n)z=pos;
        pos++;
    }
    if(z>x&&z>y)cout<<max(x,y)<<" "<<z<<endl;
    else if(z<x&&z<y)cout<<min(x,y)<<" "<<z<<endl;
    else cout<<"1 1\n";
}
 return 0;
}