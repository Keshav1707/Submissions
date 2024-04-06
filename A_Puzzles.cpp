#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t>>n;
int a[n];
for (auto &&i : a)cin>>i; 
sort(a,a+n);
int c=10000000;
for (size_t i = 0; t<=n; i++,t++)
{
    c=min(c,a[t-1]-a[i]);
}
cout<<c<<"\n";
return 0;
}