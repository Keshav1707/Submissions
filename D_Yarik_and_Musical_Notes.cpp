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
    map<int,int>m;
    for (ll i = 0; i < x; i++)
    {
        /* code */
        di(l);
        m[l]++;
    }
    ll pro=0;
    ll ma=0,mb=0;
    for (auto &&i : m)
    {
        if(i.first==1)ma=i.second;
        if(i.first==2)mb=i.second;
        pro+=(i.second*(i.second-1))/2;
    }
    pro+=(ma*mb);
    cout<<pro<<endl;
    
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