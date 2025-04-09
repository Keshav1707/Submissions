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
vecll v;
for (size_t i = 0; i < t; i++)
{
    /* code */
    di(x);
    v.pb(x);
}
int c=0;
for (size_t i = 1; i < t; i++)
{
    /* code */
    if(v[i-1]>v[i])
    {
        c=i;
        break;
    }
}
for (size_t i = 0; i < c; i++)
{
    v.pb(v[i]);
}
v.erase(v.begin(),v.begin()+c);
if(c==0){cout<<0<<endl;return 0;}
for (size_t i = 1; i < t; i++)
{
    /* code */
    if(v[i-1]>v[i])
    {
        cout<<-1<<endl;
        return 0;
    }
}
cout<<t-c<<endl;
return 0;
}