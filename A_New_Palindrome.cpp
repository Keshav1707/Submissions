#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
string s;
cin>>t;
while (t--&&cin>>s)
{
    bool f=0;
    for (size_t i = 1; i < s.size()/2; i++)
    {
        if(s[i]!=s[i-1])f=1;

    }
       cout<<(f?"YES":"NO")<<endl;
}
 return 0;
}