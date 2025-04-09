#include<bits/stdc++.h>
using namespace std;
int main()
{
string s1,s2,x="";
cin>>s1>>s2;

for (size_t i = 0; i < s1.length(); i++)
{
    if(s2[i]>s1[i]){cout<<-1;return 0;}
    else
        {
            if(s1[i]==s2[i])x+='z';
            else x+=s2[i];
        }
}
cout<<x<<endl;
return 0;
}