#include<bits/stdc++.h>
using namespace std;
int main()
{
long double  t,s,x=0;
cin>>t>>s;
while(s>=t)
{
    if(s==t){cout<<"YES"<<endl<<x;return 0;}
    s/=t;
    x++;
    
}
cout<<"NO";
return 0;
} 