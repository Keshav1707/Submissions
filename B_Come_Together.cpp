#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,xa,xb,xc,ya,yb,yc;
cin>>t;
while (t--&&cin>>xa>>ya>>xb>>yb>>xc>>yc)
{
    int sum=0;
    if(xa-xb>=0&&xa-xc>=0)sum+=min(abs(xa-xb),abs(xa-xc));
    if(xa-xb<=0&&xa-xc<=0)sum+=min(abs(xa-xb),abs(xa-xc));
    if(ya-yb>=0&&ya-yc>=0)sum+=min(abs(ya-yb),abs(ya-yc));
    if(ya-yb<=0&&ya-yc<=0)sum+=min(abs(ya-yb),abs(ya-yc));
    cout<<sum+1<<endl;
}
 return 0;
}