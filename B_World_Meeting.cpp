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
vector<pair<int,int>>v;
int t=n;
while(t--)
{
    di(a);
    di(b);
    v.pb({b,a});
}
int h=0;

sort(all(v));
int lo=0,hi=0;
int sum=0;
int maxi=0;
while(v[h].first<9)
{
    v.pb(v[h]);
    v.back().first+=24;
    h++;
}

while(hi<v.size()&&lo<=hi)
{
    if(v[hi].first-v[lo].first<9)
    {
        sum+=v[hi].second;
        hi++;
    }
    else
    {
        maxi=max(sum,maxi);
        sum-=v[lo].second;
        lo++;
    }
}
maxi=max(sum,maxi);
cout<<maxi<<endl;

return 0;
}