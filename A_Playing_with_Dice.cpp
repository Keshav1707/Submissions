#include<bits/stdc++.h>
using namespace std;
int main()
{
double a,b;
cin>>a>>b;
int x=0,y=0,z=0;
for (size_t i = 1; i < 7; i++)
{
    
     if(abs(a-i)<abs(b-i))x++;
     else if(abs(a-i)>abs(b-i))y++;
     else z++;
}
cout<<x<<" "<<z<<" "<<y;
return 0;
}