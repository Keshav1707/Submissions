#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t>>n;
for (size_t i = (t+1)/2; i <= t; i++)
{
    if(i%n==0)
    {
        cout<<i;
        return 0;
    }
}
cout<<-1;
return 0;
}