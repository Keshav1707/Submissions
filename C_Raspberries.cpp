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
    di(k);
    if(k==4)
    {
        vecll v,va,vb;
        for (int i = 0; i < n; i++)
        {
            di(x);
            v.pb(x);
        }
        
        for(auto i : v)
        {
            if(i%k==0)va.pb(0);
            else va.pb(k-i%k);
            if(i%2==0)vb.pb(0);
            else vb.pb(2-i%2);
        }
        sort(all(va));
        sort(all(vb));
        cout<<min(va[0],vb[0]+vb[1])<<endl;
    }
    else
    {
        vecll v;
        for (int i = 0; i < n; i++)
        {
            di(x);
            if(x%k==0)v.pb(0);
            else v.pb(k-x%k);
        }
        sort(all(v));
        cout<<v[0]<<endl;
    }
    
}
return 0;
}