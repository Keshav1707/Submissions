#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;

int us=0,ls=0,x,y,c=0;
while(t--&&cin>>x>>y)
{
    us+=x,ls+=y;
    if(x%2!=y%2)c++;
}
if(us%2==0&&ls%2==0)cout<<0<<endl;
else if(us%2!=ls%2)cout<<-1;
else if(c>0)cout<<1;
else cout<<-1;
return 0;
}