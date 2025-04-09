#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t,n,c=0,f=0;
cin>>t>>n;
string x;
while(t--)
{
    cin>>x;
    for (auto &&i : x)if(i=='4'||i=='7')c++;
    if(c<=n)f++;
    c=0;
}
cout<<f;
return 0;
}