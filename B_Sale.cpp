#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t>>n;
int a[t];
for (auto &&i : a)cin>>i;
sort(a,a+t);
int sum=0;
for (size_t i = 0; i < n; i++)
{
    if(a[i]<0)
    sum=sum+a[i];
}
cout<<-1*sum<<endl;
return 0;
}