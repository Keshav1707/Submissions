#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,m;
cin>>t;
while (t--&&cin>>n>>m)
{
    int xa,xb,ya,yb;
    cin>>xa>>ya>>xb>>yb;
    int x=4,y=4;
    if(xa==1||xa==n)x--;
    if(ya==1||ya==m)x--;
    if(xb==1||xb==n)y--;
    if(yb==1||yb==m)y--;
    cout<<min(y,x)<<endl;
}
return 0;
}