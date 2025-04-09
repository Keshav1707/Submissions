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
di(t);
ll ans=0;
vecll v;
for (ll i = 0; i < t; i++)
{
    di(x);
    v.pb(x);    
}
sort(all(v));
for (auto &&i : v)
{
    if(ans+1<i)break;
    ans+=i;
}

cout<<ans+1;
return 0;
}