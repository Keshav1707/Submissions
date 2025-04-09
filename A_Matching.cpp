#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
string s;
cin>>t;
while (t--&&cin>>s)
{
    int x=1;
    if(s[0]=='0')x=0;
    if(s[0]=='?')x*=9;
    for (size_t i = 1; i < s.length(); i++)
    {
        if(s[i]=='?')x*=10;
    }
    cout<<x<<endl;
}
 return 0;
}