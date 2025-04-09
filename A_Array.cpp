#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
int a[t],c=0,d=0;
for (auto &&i : a)
    {
        cin>>i;
        if(i<0)c++;
        if(i>0)d++;
    }
sort(a,a+t);
cout<<"1 "<<a[0]<<endl;
if(d==0)cout<<"2 "<<a[1]<<" "<<a[2]<<endl;
else cout<<"1 "<<a[t-1]<<endl;
if(d==0)
{
    cout<<t-3<<" ";
    for (size_t i = 3; i < t; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
else 
{
    cout<<t-2<<" ";
    for (size_t i = 1; i < t-1; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
return 0;
}