#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
string s,x="";
cin>>t>>s;
if(t%2!=0)
{
    for (int i = t - 2; i >= 0; i-=2)x+=s[i];
    for (size_t i = 0; i < t; i+=2)x+=s[i];   
}
else
{
    for (int i = t-2 ; i >= 0; i-=2)x+=s[i];
    for (size_t i = 1; i < t; i+=2)x+=s[i];
}
cout<<x<<endl;
return 0;
}