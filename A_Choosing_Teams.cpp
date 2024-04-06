#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,x,c=0;
cin>>t>>n;
while (t--&&cin>>x)
{
    if(x<=5-n)c++;
}
cout<<c/3<<endl;
 return 0;
}