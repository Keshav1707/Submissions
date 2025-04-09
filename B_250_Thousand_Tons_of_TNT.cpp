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
vector<int> printDivisors(int n) 
{ 
    vector<int>v;
    for (int i = 1; i <= n; i++) 
        if (n % i == 0) 
            v.pb(i); 
    return v;
} 
void solve()
{
    di(x);
    vecll v;
    vector<int>va=printDivisors(x);
    ll prev=0;
    v.pb(0);
    for (ll i = 0; i < x; i++)
    {
        di(m);
        v.pb(m+prev);
        prev=v.back();
    }
    ll maxdiff=0;
    for (auto &&j : va)
    {
        ll minisum=LLONG_MAX,maxisum=0;
        for (ll i = 0; i < x; i+=j)
        {
            ll sum=v[i+j]-v[i];
            minisum=min(minisum,sum);
            maxisum=max(maxisum,sum);
        }
        maxdiff=max(maxdiff,maxisum-minisum);
        
    }
    cout<<maxdiff<<endl;
    
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