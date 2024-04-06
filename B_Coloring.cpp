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
    di(m);
    di(k);
    ll maxi=0;
    vecll v(m);
    for (int i = 0; i < m; i++)
    {
        di(x);
        v.pb(x);
        maxi=max(maxi,x);
    }
    if(maxi>n/k)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
return 0;
}