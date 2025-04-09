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

    di(n);di(m);
    string s,t;
    cin>>s>>t;
    ll i=0;
    ll maxi=LLONG_MAX;
    vector<vector<int>>g;
    while(i<=(m-n))
    {
        ll c=0;
        ll v=0;
        vecll k;
        for (size_t j = i; j < i+n; j++)
        {
            if(s[v]!=t[j])
            {
                c++;
                k.push_back(v+1);
            }
            v++;
        }
        i++;
        if(c<maxi)g.push_back(k);
        maxi=min(maxi,c);
    }
    cout<<maxi<<endl;
    for (auto &&i : g.back())
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
return 0;
}