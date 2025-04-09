#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t,n;
cin>>t>>n;
pair<int,int>a[t];
for (auto &&i : a)cin>>i.first>>i.second;
long long s=0,x=0;
for (auto &&i : a)
{
    while(x+n<i.first)x+=n;
    s=s+(i.second-x);
    x=i.second;
}

cout<<s<<endl;
return 0;
}