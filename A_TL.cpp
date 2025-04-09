#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int a[n],b[m];
for (auto &&i : a)cin>>i;
for (auto &&i : b)cin>>i;
sort(a,a+n),sort(b,b+m);
if(2*a[0]<b[0]&&b[0]>max(a[n-1],2*a[0]))cout<<max(a[n-1],2*a[0])<<endl;
else cout<<-1<<endl;
return 0;
}