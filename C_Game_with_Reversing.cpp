#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,n;
cin>>x;
string s,t;
while (x--&&cin>>n>>s>>t)
{
    int c=0,d=0;
    for (size_t i = 0; i < n; i++)
    {
       // cout<<n-1-i<<endl;
        if(s[i]!=t[i])c++;
        if(s[n-1-i]!=t[i])d++;
    
    }
    if(c==0)cout<<0<<endl;
    else if(c<=d)cout<<2*c-1<<endl;
    else
    {
        if(d==0)cout<<2<<endl;
        else cout<<2*d<<endl;
    }
}
 return 0;
}