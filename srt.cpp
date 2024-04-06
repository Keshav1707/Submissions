#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
int a[t];
for (auto &&i : a)cin>>i;
int key,j;
for (size_t i = 1; i < t; i++)
{
    key=a[i];
    j=i-1;
    while( j>=0&&a[j]>key)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=key;
}
for (auto &&i : a)cout<<i;

return 0;
}