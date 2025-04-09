#include<bits/stdc++.h>
using namespace std;
int main()
{
int m,n,a,b;
cin>>m>>n;
pair<string,string> s[n];
for (auto &&i : s)cin>>i.first>>i.second;   
string f[m];
for (auto &&i : f)
{
    cin>>i;
    for (auto &&j : s)
    {
        a=j.first.length();
        b=j.second.length();
        if(j.first==i&&a<=b)cout<<j.first<<" ";
        else if(j.first==i)cout<<j.second<<" ";
   }
    
}

return 0;
}