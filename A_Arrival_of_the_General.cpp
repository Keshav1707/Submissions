#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
int a,mn=101,mx=0,j=0,k=0;
for (size_t i = 1; i <= t; i++)
{
   cin>>a;
   if(mx<a)mx=a,j=i;
   if(mn>=a)mn=a,k=i;
}

//cout<<mx<<" "<<mn<<endl;
if(k<j)k++;
cout<<j-1+t-k<<endl;
//else k--,cout<<j+


return 0;
}