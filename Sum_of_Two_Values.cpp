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
di(x);
vector<pair<int,int>>v;
for (int i = 0; i < n; i++)
{
    /* code */
    di(l);
    v.pb({l,i+1});
}
sort(all(v));
for (auto &&i : v)
{
    //cout<<i.first<<" ";
}

int hi=n-1,lo=0;
bool f=0;
while(lo<hi)
{
    if(v[lo].first+v[hi].first==x)
    {
        f=1;
        break;
    }
    else if(v[lo].first+v[hi].first>x)hi--;
    else lo++;
}
if(f)
    cout<<v[hi].second<<" "<<v[lo].second<<endl;
else       
    cout<<"IMPOSSIBLE"<<endl;
return 0;
}