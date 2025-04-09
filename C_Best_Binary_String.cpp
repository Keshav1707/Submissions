#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
string s;
while (t--&&cin>>s)
{
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if(s[i]=='/'||s[i]=='?')
        {
            if(s[i+1]=='0')s.replace(i,1,"0");
            else s.replace(i,1,"1");
        }
    }
    cout<<s<<endl;
    
}
 return 0;
}