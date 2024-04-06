#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t>>n;
pair<int,int>a[n];
for (auto &&i : a)cin>>i.second>>i.first;
sort(a,a+n);
int sum=0;
for (int i = n - 1; i >= 0; i--)
{
    //cout<<t<<endl;
    if(t-a[i].second>0)sum=sum+a[i].first*a[i].second,t-=a[i].second;
    else {sum=sum+t*a[i].first;break;}
}
cout<<sum<<endl;
return 0;
}