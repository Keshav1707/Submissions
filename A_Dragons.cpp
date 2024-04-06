#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
pair<int,int>p[m];
for (auto &&i : p)cin>>i.first>>i.second;
sort(p,p+m);
for (auto &&i : p)
{
  if(i.first>=n){cout<<"NO";return 0;}
  else n+=i.second;
}
cout<<"YES";

return 0;
}