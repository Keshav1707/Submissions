#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,x,c=0,f=0,v=0;
cin>>t;
vector<int>p;
for (size_t i = 0; i < t; i++)
{
    f++;
    cin>>x;
    if(x<0)c++;
    if(c==3)
    {
        c=1;
        p.push_back(f-1);
        f=1;
        v++;
    }
    if(i==t-1)p.push_back(f),v++;
}
cout<<v<<endl;
for (auto &&i : p)cout<<i<<" ";
{
    
}

return 0;
}