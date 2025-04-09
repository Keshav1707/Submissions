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
void rec(int n,vector<int>&v,vector<vector<int>>&a,vector<int>&res,vector<int>&g)
{
    if(v.size()==n)
    {
        a.push_back(v);
        return ;
    }
    for (ll i = 0; i < n; i++)
    {
        if(res[i]==0)
        {
            res[i]=1;
            v.push_back(g[i]);
            rec(n,v,a,res,g);
            v.pop_back();
            res[i]=0;
        }
    }
}
void solve()
{
    vector<vector<int>>a;
    vector<int>v;
    vector<int>res;
    rec()
}
signed main()
{
ll t=1;
cin>>t;
while(t--)
{
solve();
}
return 0;
}