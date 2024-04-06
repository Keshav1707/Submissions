#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
pair<int,int>a[t];
for (size_t i = 0; i < t; i++)cin>>a[i].first>>a[i].second;
sort(a,a+t);
for (size_t i = 0; i < t-1; i++)
{
    if(a[i].second>a[i+1].second){cout<<"Happy Alex";return 0;}
}
cout<<"Poor Alex";


 return 0;
}