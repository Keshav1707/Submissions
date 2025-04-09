#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while (t--&&cin>>n)
{
    int x=0,y=1,a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        x+=a;
        y*=a;
    }
    int z=0;
    while(x<0 || y!=1)
    {
        y*=-1;
        x+=2;
        z++;
    }
    //cout<<x<<" "<<y<<endl;
    cout<<z<<endl;
}
 return 0;
}