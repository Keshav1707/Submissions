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
vecll v,va,vb;
ll suma=0,sumb=0;
for (size_t i = 0; i < t; i++)
{
    /* code */
    di(x);
    v.pb(x);
    if(x>0)va.pb(x),suma+=x;
    else vb.pb(-x),sumb+=(-x);
}
if(suma>sumb)cout<<"first"<<endl;
else if(suma<sumb)cout<<"second"<<endl;
else
{
    if(va==vb)
    {
        if(v.back()>0)cout<<"first"<<endl;
        else cout<<"second"<<endl;
    }
    else 
    {   
        ll a=0,b=0;
        while(a<va.size()&&b<vb.size())
        {
            if(va[a]>vb[b]){cout<<"first"<<endl;return 0;}
            else if(va[a]<vb[b]){cout<<"second"<<endl;return 0;}
            else a++,b++;
        }
    }
}
return 0;
}