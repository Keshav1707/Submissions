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
void solve()
{
    di(x);
    vecll v;
    for (int i = 0; i < x*2; i++)
    {
        di(k);
        v.pb(k);
    }
    sort(all(v));
    int dis=0;
    for (int i = 1; i < x; i++)
    {
        dis+=(v[i]-v[i-1]);
    }
    for (int i = x+1; i < 2*x; i++)
    {
        dis+=(v[i]-v[i-1]);
    }
    cout<<dis<<endl;
    for (int i = 0; i < x; i++)
    {
        cout<<v[i]<<" "<<v[i+x]<<endl;
    }
}
signed main()
{
di(t);
while(t--)
{
    solve();
}
return 0;
}