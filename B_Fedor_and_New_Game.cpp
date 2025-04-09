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
di(m);
di(k);
vecll v;
for (size_t i = 0; i < m; i++)
{
    /* code */
    di(x);
    v.pb(x);
}
di(a);
ll ans=0;
for (auto &&i : v)
{
    ll b=a^i;
    ll c=0;
    ll x=0;
    while(b!=0)
    {
        if(1&b)c++;
        n++;
        b=b>>1;
        
        
    }
    if(c<=k)ans++;
}
cout<<ans<<endl;
return 0;
}