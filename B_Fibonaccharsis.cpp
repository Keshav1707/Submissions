#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,k;
cin>>t;
while (t--&&cin>>n>>k)
{
    int w=1,x=1,y=1,z=2;
    int ca,cb;
    if(k==3)ca=1,cb=1;
    else if(k==4)ca=1,cb=2;
    else
    {
        for (size_t i = 0; i < k-4; i++)
        {
            int fa=x;
            x=w+x;
            w=fa;
            int fb=z;
            z=y+z;
            y=fb;
            
        }
        ca=x,cb=z;

    }
    int f=0;
    for (size_t i = 0; i <= n; i++)
    {
        if((n-(ca*i))%(cb)==0)
        {
            int l=(n-(ca*i))/(cb);
            if(l>=i)f++;
        }
    }
    cout<<f<<endl;
    
}
 return 0;
}