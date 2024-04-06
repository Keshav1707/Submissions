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
unordered_map<int,int>m;
for (size_t i = 0; i < t; i++)
{
    /* code */
    di(x);
    di(y);
    v.pb(y);
    m[x]++;
    m[y];
}
for (auto &&i : v)
{
    cout<<t-1+m[i]<<" "<<t-1-m[i]<<endl;
}
// cout<<endl;
// for (auto &&i : m)
// {
//     cout<<i.first<<" "<<i.second<<endl;
// }


return 0;
}