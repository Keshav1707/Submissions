#include<bits/stdc++.h>
using namespace std;
long long a[int(2e5+10)];
int main()
{
int  t,n,q;
cin>>t;

while (t--&&cin>>n>>q)
{
   for (size_t i = 1; i <= n; i++)cin>>a[i];
    sort(a+1,a+n+1);
    for (size_t i = 2; i <= n; i++)a[i]+=a[i-1];
     long long maxsum=0;
    for (size_t i = 0; i <= q; i++)
    {
      maxsum=max(maxsum,a[n-i]-a[2*(q-i)]);
    }
    
    cout<<maxsum<<endl;

    
}
 return 0;
}