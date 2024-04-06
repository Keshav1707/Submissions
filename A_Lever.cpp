#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,l,r;
cin>>s;
long long x;
for (size_t i = 0; i < s.length(); i++)
{
    if(s[i]=='^'){x=i;break;}
}
l=s.substr(0,x);
reverse(l.begin(),l.end());
r=s.substr(x+1);
long long ls=0,rs=0;
for (size_t i = 0; i < l.length(); i++)
{
   if(isdigit(l[i])) ls=ls+(int(l[i])-48)*(i+1);
}
for (size_t i = 0; i < r.length(); i++)
{
   if(isdigit(r[i])) rs=rs+(int(r[i])-48)*(i+1);
}
if(ls==rs)cout<<"balance";
else ls>rs?cout<<"left":cout<<"right";

return 0;
}