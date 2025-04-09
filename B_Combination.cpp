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
vector<pair<int,int>>p;
for (size_t i = 0; i < t; i++)
{
    di(x);
    di(y);
    p.pb({y,x});
}
sort(all(p),greater<pair<int,int>>());

int ans=0,lo=0,c=0;
ans+=p[lo].second;
c+=p[lo].first-1;
lo++;
while(p[lo].first!=0&&lo<t)
{
    ans+=p[lo].second;
    c+=p[lo].first-1;
    lo++;
}
c++;
while(c>0&&lo<t)
{
    ans+=p[lo].second;
    c--;
    lo++;
}
cout<<ans;
return 0;
}