#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int c=0;
    string s;
    cin>>s;
    
    if(s.size()==1)
    {
        if(s[0]=='_')c+=2;
        else c++;
        goto f;
    }
    if(s[0]=='_')c++;
    if(s[s.size()-1]=='_')c++;
   for (size_t i = 0; i < s.size(); i++)
   {
      
      if(s[i]=='_'&&s[i+1]=='_')c++;
      
   }
   f:
   cout<<c<<endl;
}
return 0;
}