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
di(n);
di(m);
vecll v;
for (size_t i = 0; i < n; i++)
{
    di(x);
    v.pb(x);        
}
sort(all(v));
ll sum =0;
ll x=n-m,y=m-x;
x=(n-y)/2;
//cout<<x<<endl;
for (int i = n - 1; i >= n-y; i--)
{
    /* code */
    sum+=(v[i]*v[i]);
}
for (int i = 0; i < x; i++)
{
    /* code */
    sum+=(v[i]+v[(2*x)-i-1])*(v[i]+v[(2*x)-i-1]);
}

cout<<sum<<endl;
return 0;
}