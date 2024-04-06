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
    vector<pair<int,int>>p;
    vector<pair<int,int>>pa;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        di(a);
        di(b);
        p.pb({a,1});
        p.pb({b,2});
        pa.pb({a,b});
     }
    sort(all(p));
    ll maxi=0,c=0;
    vecll v;
    int l=0;
    for (auto &&i : p)
    {
        if(i.second==2)c-=1;
        else c+=1;
        v.pb(c);
        if(maxi<c)
        {
            l=i.first;
        }
        maxi=max(maxi,c);
        
    }
    c=0;
    
    for (auto &&i : pa)
    {
        if(i.first<=l&&i.second>=l)continue;
        else c++;
    }
     if(c>0)cout<<maxi-1<<endl;
     else cout<<maxi<<endl;
}

return 0;
}