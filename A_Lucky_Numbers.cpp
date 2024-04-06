#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t,l,r;
cin>>t;
while (t--&&cin>>l>>r)
{
    long long m=INT_MIN,pos;
    while(l<=r)
    {
        string s=to_string(r);
        sort(s.begin(),s.end());
        long long x=s[s.length()-1]-s[0];
        if(m<x)m=x,pos=r;
        r--;
        if(pos==9)break;
    }
    cout<<pos<<endl;
}
 return 0;
}