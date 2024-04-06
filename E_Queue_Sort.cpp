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
    ll mini=LLONG_MAX,minind=x;
    for (ll i = 0; i < x; i++)
    {
        di(m);
        v.pb(m);
        if(m<mini)
        {
            mini=m;
            minind=i;
        }
    }
    if(is_sorted(v.begin()+minind,v.end()))cout<<minind<<endl;
    else cout<<-1<<endl;
    //cout<<mini<<" "<<minind<<endl;
    
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