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
while(t--)
{
    di(n);
    vecll v(n);
    for (auto &&i : v)
    {
        cin>>i;
    }
    ll ans=v[0]-1;
    for (ll i = 1; i < n; i++)
    {
        /* code */
        if(v[i]>=v[i-1])ans+=v[i]-v[i-1];
    }
    cout<<ans<<endl;
    
}
return 0;
}