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
while(t--)
{
    vector<vector<int>>v;
    di(n);
    map<int,int>m;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        di(x);
        vecll r;
        for (size_t j = 0; j < x; j++)
        {
            /* code */
            di(l);
            r.pb(l);
            m[l]++;
        }
        v.pb(r);   
    }
    
    int maxi=0;
    for (auto &&i : v)
    {
        map<int,int>s=m;
        for (auto &&j : i)
        {
            s[j]--;
            if(s[j]<=0)s.erase(j);
        }
        maxi=max(maxi,s.size()*1LL);
    }
    cout<<maxi<<endl;
}
return 0;
}