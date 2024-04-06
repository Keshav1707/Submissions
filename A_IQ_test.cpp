#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,x=1;
cin>>t;
pair<int,int>a[t];
for (auto &&i : a)cin>>i.first,i.first=i.first%2,i.second=x,x++;
sort(a,a+t);

if(a[0].first==0&&a[1].first==0)cout<<a[t-1].second;
else cout<<a[0].second;

return 0;
}