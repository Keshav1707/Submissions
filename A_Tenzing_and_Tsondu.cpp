#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t,n,m;
cin>>t;
while (t--&&cin>>n>>m)
{
    int s1=0,s2=0,x;
    for (size_t i = 0; i < n; i++)
    {
        cin>>x;
        s1+=x;
    }
    
    for (size_t i = 0; i < m; i++)
    {
        cin>>x;
        s2+=x;
    }
    if(s1>s2)cout<<"Tsondu"<<endl;
    else if(s2>s1)cout<<"Tenzing"<<endl;
    else cout<<"Draw"<<endl;
    
}
 return 0;
}