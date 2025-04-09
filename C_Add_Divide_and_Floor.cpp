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
    ll maxi=0,mini=LLONG_MAX;
    for (ll i = 0; i < x; i++)
    {
        di(m);
        maxi=max(m,maxi);
        mini=min(m,mini);
    }
    ll diff=maxi-mini;
    int c=0;
    while(diff>1)
    {
        c++;
        diff=diff>>1;
    }
    if(diff==0)
    {
        cout<<c<<endl;
        return;
    }
    cout<<c+1<<endl;
    if(c+1>x)return;
    else 
    {
        
        for (ll i = 0; i < c+1; i++)
        {
            cout<<mini<<" ";
        }
        cout<<endl;
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