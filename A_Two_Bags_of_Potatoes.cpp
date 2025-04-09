#include<bits/stdc++.h>
using namespace std;
int main()
{
long long y,k,n;
cin>>y>>k>>n;
int i =1,f=0;
while(k*i<=n)
{
    if(k*i>y)
        cout<<k*i-y<<" ",f++;
    i++;
}
if(f==0)cout<<-1;
return 0;
}