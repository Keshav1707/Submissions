#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
int a[t];
for (auto &&i : a)cin>>i;
int m=INT_MAX;
for (auto &&i : a)
{
    int x,sum=0;
    for (size_t j = 0; j < i; j++)
    {
        cin>>x;
        //cout<<x<<endl;
        sum+=x*5;
    }
    sum+=i*15;
   // cout<<sum<<endl;
    m=min(m,sum);
}
cout<<m;
return 0;
}