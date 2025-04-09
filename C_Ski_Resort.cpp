#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t,n,k,q;
cin>>t;
while (t--)
{
    cin>>n>>k>>q;
    long long c=0,m=0,a;
    for (size_t i = 0; i < n; i++)
    {
        cin>>a;
        if(a<=q)c++;
        else if(a>q)c=0;
        if(c>=k)m=m+(c-k+1);
    }
    cout<<m<<endl;
}
 return 0;
}