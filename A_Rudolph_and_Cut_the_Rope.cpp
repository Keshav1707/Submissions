#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t,n;
cin>>t;
long long x,y;
while (t--&&cin>>n)
{
    long long c=0;
    while(n--)
    {
        cin>>x>>y;
        if(x-y>0)c++;
    }
    cout<<c<<endl;
}
 return 0;
}