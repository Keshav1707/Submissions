#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t,n;
cin>>t;
while (t--&&cin>>n)
{
    long long sum=n;
    while(n>=1)
    {
        n=n/2;
        sum+=n;
    }
    cout<<sum<<endl;
}
 return 0;
}