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
di(x);
di(y);
vecll v(x);
for (ll i = 0; i < x; i++)
{
    di(m);
    v[m-1]=i+1;
}
int c=1;
for (auto &&i : v)
{
    cout<<i<<" ";
}

cout<<"\n";
int l=v[0];
for (ll i =0 ; i < x; i++)
{
    /* code */
    if(l>v[i])c++;
    l=v[i];
}
cout<<c<<endl;
for (ll i = 0; i < y; i++)
{
    /* code */
    di(a);
    di(b);
    if(v[a-1]<v[b-1])c;
    else c++;
    swap(v[a-1],v[b-1]);
    cout<<c<<endl;
}

return 0;
}