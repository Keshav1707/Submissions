#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,k;
cin>>t;
while (t--&&cin>>n>>k)
{
    int a[n],b[n-1];
    for (auto &&i : a)cin>>i;
    for (size_t i = 0; i < n-1; i++)
    {
        b[i]=abs(a[i]-a[i+1]);
    
    }
    sort(b,b+n-1);
    int sum=0;
    for (size_t i = 0; i < n-k; i++)
    {
       sum+=b[i];
    }
    cout<<sum<<endl;
}
 return 0;
}