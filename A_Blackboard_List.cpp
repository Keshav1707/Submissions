#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while (t--&&cin>>n)
{
    int a,m=0,f=0;
    while(n--)
    {
        cin>>a;
        if(a<0){m=a;f=1;}
        if(f==0)m=max(m,a);
       // cout<<m<<endl;
    }
    cout<<m<<endl;
    //cout<<endl;
}
 return 0;
}