#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while (t--&&cin>>n)
{
    int a[n];
    for (size_t i = 0; i < n; i++)cin>>a[i];
    sort(a,a+n);
    int b[a[n-1]+1]={0};
    for (size_t i = 0; i < n; i++)b[a[i]]++;
    int x=b[0],f=0;
    for (auto &&i : b)
    {
        if(i>x){f++;break;}
        x=i;
    }
    f==0?cout<<"YES\n":cout<<"NO\n";

    
}
 return 0;
}