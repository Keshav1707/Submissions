#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,x=0,y=0;
cin>>t;
int a[t];
for (auto &&i : a)cin>>i;
for (size_t i = 1; i < t; i++)
{
    if(a[i]<a[i-1])x++;
    else y++;
}
cout<<x<<" "<<y;
return 0;
}