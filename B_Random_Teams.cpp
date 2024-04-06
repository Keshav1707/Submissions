#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
int n,m;
cin>>n>>m;
int l=(m*(n/m-1)+(n%m)*2)*(n/m)/2;
int ans=(n-m+1)*(n-m)/2;
cout<<l<<" "<<ans<<endl;
return 0;
}