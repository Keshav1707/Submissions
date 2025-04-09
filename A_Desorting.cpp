#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t,n;
cin>>t;
while (t--&&cin>>n)
{
    long long a[n],b[n-1],m=INT_MAX,x=0,f=0;
    for (auto &&i : a)cin>>i;
    for (size_t i = 0; i < n-1; i++)
    {
        if(a[i]>a[i+1]){f++;continue;}
        x=(a[i+1]-a[i])/2+1;
        m=min(x,m);
    }
    if(f==0)
    cout<<m<<endl;
    else cout<<0<<endl;
}

 return 0;
}