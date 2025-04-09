#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,a,b,c,d;
cin>>t;
while (t--&&cin>>a>>b>>c>>d)
{
    if(d-b+a<c||d<b)cout<<-1<<endl;
    else cout<<d-b+d-b+a-c<<endl;
}
 return 0;
}
		