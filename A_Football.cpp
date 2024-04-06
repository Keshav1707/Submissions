#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
string s;
map<string,int>a;
for (size_t i = 0; i < t; i++)
{
    cin>>s;
    a[s]++;
}
int f=a.begin()->second;
s=a.begin()->first;
for (auto &&i : a)
{
    if(i.second>f)f=i.second,s=i.first;
}
cout<<s<<endl;
return 0;
}