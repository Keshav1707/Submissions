#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
if(t==1)cout<<-1<<endl;
else
{
    for (size_t i = 0; i < t-1; i++)
    {
        cout<<i+2<<" ";
    }
    cout<<1;
}
return 0;
}