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
map<int,int>m;
for (size_t i = 0; i < t; i++)
{
    /* code */
    di(s);
    di(c);
    m[s]+=c;
    // m[s*2]+=m[s]/2;
    // m[s]=m[s]%2;
}

for (auto &&i : m)
{
    m[i.second*2]+=i.second/2;
    i.second=i.second%2;
    
}
for (auto &&i : m)
{
    cout<<i.first<<" "<<i.second<<endl;
}

return 0;
}