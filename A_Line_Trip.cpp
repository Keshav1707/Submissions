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
    di(x);
    vecll v;
    v.pb(0);
    for (ll i = 0; i < n; i++)
    {
        di(c);
        v.pb(c);

    }
    vecll va;
    for (ll i = 1; i < n+1; i++)
    {
        /* code */
        va.pb(v[i]-v[i-1]);
    }
    va.pb(2*(x-v.back()));
    cout<<*max_element(va.begin(),va.end())<<endl;
    
}
return 0;
}