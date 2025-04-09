#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
pair<int,int>a[t];
for (auto &&i : a)cin>>i.first>>i.second;
sort(a,a+t);
for (auto &&i : a)cout<<i.first<<" "<<i.second<<endl;
cout<<endl;
return 0;
}