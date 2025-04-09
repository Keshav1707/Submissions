#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while (t--&&cin>>n)
{
    int a[n],b[n],f=0;
    for (auto &&i : a)cin>>i;
    for (size_t i = 0; i < n; i++)
    {
        b[i]=a[i];
    }
    sort(a,a+n);
    for (size_t i = 0; i < n; i++)
    {
        //cout<<a[i]<<" "<<b[i]<<endl;
        if(a[i]%2!=b[i]%2){cout<<"NO"<<endl;f++;break;}
    }
    
    if(f==0)cout<<"YES"<<endl;
    
}
 return 0;
}