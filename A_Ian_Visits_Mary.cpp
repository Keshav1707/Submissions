#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,x,y;
cin>>t;
while (t--&&cin>>x>>y)
{
    if(__gcd(x,y)==1){cout<<1<<endl;cout<<x<<" "<<y<<endl;continue;;}
    else cout<<2<<endl;
    cout<<x-1<< " 1"<<endl<<x<<" "<<y<<endl;
}
 return 0;
}