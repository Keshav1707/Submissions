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
vector <ll> adj[4004];
signed main()
{
di(n);
di(x);
vecll v;
for (size_t i = 0; i < n; i++)
{
    /* code */
    di(t);
    v.pb(t);
}
sort(all(v));
int hi=n-1,lo=0;
ll cnt=0;
while(lo<=hi)
{
   // cout<<v[lo]<<v[hi]<<endl;
    if(v[lo]+v[hi]>x)cnt++,hi--;
    else cnt++,lo++,hi--;
}
cout<<cnt<<endl;
return 0;
}