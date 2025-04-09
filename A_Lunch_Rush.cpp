#include<bits/stdc++.h>
using namespace std;
int main()
{
int m,n;
cin>>m>>n;
int f,t,j=INT_MIN;
while (m--&&cin>>f>>t)
{
    if(t>n)j=max(j,f-t+n);
    else j=max(j,f);
}
cout<<j<<endl;
 return 0;
}