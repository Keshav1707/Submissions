#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while (t--&&cin>>n)
{
    int a[n];
    for (auto &&i : a)cin>>i;
    int z=abs(a[0]-a[n-1]);
    for (size_t i = 0; i < n/2; i++)
    {
        z=__gcd(z,abs(a[i]-a[n-i-1]));
    }
    cout<<z<<endl;
}
 return 0;
}