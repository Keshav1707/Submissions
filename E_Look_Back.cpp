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
    di(n);
    vector<long double>v;
    for (int i = 0; i < n; i++)
    {
        di(x);
        v.pb(x);
    }
    int c=0,cr=0;
    for (int i = 1; i < n; i++)
    {
        int a=ceil(log2((long double)(v[i-1]/v[i])));
        cr=max(cr+a,0LL);
        c+=cr;
    }
    cout<<c<<endl;
    
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