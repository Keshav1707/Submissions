#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,t;
cin>>n;
int a[n],prefix[n];
for (size_t i = 0; i < n; i++)
{
    cin>>a[i];
    prefix[0]=a[0];
    if(i>0)prefix[i]=prefix[i-1]+a[i];
}
int l,r;
cin>>t;
while (t--&&cin>>l>>r)
{   
    if(l==0){cout<<prefix[r];break ;}
    cout<<prefix[r]-prefix[l-1]<<endl;
}
 return 0;
}