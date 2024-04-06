#include<bits/stdc++.h>
using namespace std;
int solve(int x,int y)
{
    int a[x],z,tmp=-1,n=-1;
    for (size_t i = 1; i <= x; i++)
    {
        cin>>a[i];
    }
    for (size_t i = 1; i <= x; i++)
    {
        cin>>z;
        if(y>=a[i]+i-1)
        {
            if(z>tmp)
            {
                tmp=z;
                n=i;
            }
        }
        /* code */
    }
    return n;
    
}
int main()
{
int t,a,b;
cin>>t;
while (t--&&cin>>a>>b)
{
    cout<<solve(a,b)<<endl;
}
 return 0;
}