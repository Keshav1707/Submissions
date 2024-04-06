#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
string s;
while (t--&&cin>>n>>s)
{
    int c=1,b=1;
    for (int i=0;i<n;i++)
    {
        c++;
       if(s[i]!=s[i+1])
       {
            b=max(c,b);
            c=0;
       } 
    }
    cout<<b<<endl;
}
 return 0;
}