#include<bits/stdc++.h>
using namespace std;
int palindrome(string str)
{
    string t;
   while(str.size()!=0)
   {
    str.pop_back();
    t=str;
    reverse(t.begin(),t.end());
    if(t!=str)return str.size();

   } 
   return -1;
}
int main()
{
int t;string s;
cin>>t;
while (t--&&cin>>s)
{
   cout<< palindrome(s)<<endl;
}
 return 0;
}