#include<bits/stdc++.h>
using namespace std;
int main()
{
float a,b,c,d;
cin>>a>>b>>c>>d;
float x,y;
x=max(0.3*a,a-0.004*a*c);
y=max(0.3*b,b-0.004*b*d);

//cout<<fixed<<x<<" "<<y<<endl;
if(x==y)cout<<"Tie";
else
{
    x>y?cout<<"Misha":cout<<"Vasya";
}
return 0;
}