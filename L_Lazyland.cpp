#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t>>n;
pair<int,int>p[t];
for (auto i : p)cin>>i.first;
for (auto &&i : p)cin>>i.second;   
sort(p,p+t);





return 0;
}