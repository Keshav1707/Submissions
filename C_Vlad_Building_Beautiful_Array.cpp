#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while (t--&&cin>>n)
{
    int a[n],x=0;
    for (auto &&i : a)
    {
        cin>>i;
        if(i%2==0)x++;
    }
   // cout<<x<<" "<<endl;
    sort(a,a+n);
    if(a[0]%2!=0||x==n)cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
 return 0;
}