#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,x,y,f;
cin>>t;
int a[t];
for (auto &&i : a)cin>>i;
f=a[0];
for (size_t i = 0; i < t-1; i++)
{
    //if(i==t-1)a[i]=abs(a[i]-a[0]);
    a[i]=abs(a[i]-a[i+1]);
}

a[t-1]=abs(a[t-1]-f);
f=INT_MAX;
for (auto &&i : a)
{

}

return 0;
}