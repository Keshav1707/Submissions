#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,a,b,c,d;
cin>>t;
while (t--&&cin>>n>>a>>b>>c>>d)
{
    cout<<abs(min(min(a,n-a+1),min(b,n-b+1))-min(min(c,n-c+1),min(d,n-d+1)))<<endl;
}
 return 0;
}