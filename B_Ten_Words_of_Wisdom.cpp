#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,x;
cin>>t;
while (t--)
{
    int a,b,m=0,n=0,f=0;
    cin>>x;
    while(x--)
    {
        m++;
        cin>>a>>b;
        if(a<11&&b>n)n=b,f=m;
    }
    cout<<f<<endl;
}
 return 0;
}