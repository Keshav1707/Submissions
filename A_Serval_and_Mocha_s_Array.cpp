#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while (t--&&cin>>n)
{
    long long\ a[n],f=0;
    for (auto &&i : a)cin>>i;
    for (size_t i = 0; i < n-1; i++)
    {
       for (size_t j = i+1; j < n; j++)
       {
            if(__gcd(a[i],a[j])<=2){f++;break;}
       }
       
    }
    f==0?cout<<"No\n":cout<<"Yes\n";
}
 return 0;
}