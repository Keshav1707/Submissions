#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while (t--&&cin>>n)
{
    int res=0;
    
    int a[n];
    for (auto &&i : a)cin>>i;
    if(n==1){cout<<0<<endl;continue;}
    sort(a,a+n);
    for (size_t i = 0; i < n/2; i++)
    {
        res=res+a[n-i-1]-a[i];
    }
    cout<<res<<endl;
    
}
 return 0;
}