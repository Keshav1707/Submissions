#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while (t--&&cin>>n)
{
    int a[n],j=1;
    for (auto &&i : a)
    {
        cin>>i;
        i=abs(i-j);
        j++;
    }
    int x=a[0];
    for (auto &&i : a)
    {
       x=__gcd(x,i); 
    }
    cout<<x<<endl;
    
}
 return 0;
}