#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t>>n;
int a[n],sum=0;
for (size_t i = 0; i < t; i++)
{
    cin>>a[i];
    if(i!=t-1)a[i]+=10;
    sum=sum+a[i];
    if(sum>n){cout<<-1;return 0;}
}
//cout<<(n-sum)/5<<endl;
cout<<((t-1)*2)+(n-sum)/5;
 return 0;
}