#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,t;
cin>>s>>t;
int j=0;
for (size_t i = 0; i < t.length(); i++)
{
    if(t[i]==s[j])j++;
}

cout<<j+1;
return 0;
}