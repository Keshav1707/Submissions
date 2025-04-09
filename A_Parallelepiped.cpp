#include<bits/stdc++.h>
using namespace std;
int main()
{
long long a,b,c;
cin>>a>>b>>c;
long double x=sqrt(a*b*c);
//cout<<x<<endl;
a=x/a,b=x/b,c=x/c;
//cout<<a<<" "<<b<<" "<<c<<endl;
cout<<(a+b+c)*4<<endl;
return 0;
}