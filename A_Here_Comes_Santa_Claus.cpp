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
    vector<long double> v;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        di(x);
        v.pb(x);
    }
    sort(all(v));
    long double avb,ave=(v[n-1]+v[n-2])/2;
    if(n&1==1)
    {
        avb=(v[0]+v[2])/3;
    }
    else avb=(v[0]+v[1])/2;
    cout<<ave-avb<<endl;
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