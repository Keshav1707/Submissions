#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll            long long 
#define di(x)         ll x;cin>>x
#define vecll         vector<ll>
#define pb            push_back
#define po            pop_back
#define all(x)        x.begin(),x.end()
#define el            <<endl;
#define PI            3.14159265359
#define MOD             int(1e9+7)
typedef pair<ll,ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
signed main()
{
di(n);
di(t);
vecll v(n+1);
v.pb(0);
for (int i=1;i<=n;i++)
{
    cin>>v[i];
    v[i]+=v[i-1];
}
ll lo=0,hi=1;
ll maxi=0;
while(hi<=n)
{
    if(v[hi]-v[lo]<=t)maxi=max(maxi,hi-lo),hi++;
    else if(v[hi]-v[lo]>t)lo++;
}
cout<<maxi<<endl;
return 0;
}