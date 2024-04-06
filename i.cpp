#include<bits/stdc++.h>
using namespace std;
int main()
{
string t;
long long k;
cin>>t>>k;
long long a=0;
for (auto &&i : t)
{
    if(int(i)>=48&&int(i)<=57)a+=(int(i)-48),a=a*10;
}
a/=10;
string s=to_string(a+k);
cout<<"[";
for (size_t i = 0; i < s.length(); i++)
{
    cout<<s[i];
    if(i+1==s.length())cout<<"]";
    else cout<<",";
}

return 0;
}