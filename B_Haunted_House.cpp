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
    vecll v;
    di(n);
    string s;
    cin>>s;
    reverse(all(s));
    for (size_t i = 0; i < n; i++)
    {
        if(s[i]=='0')v.pb(i+1);
    }
    
    int m=1;
    ll ans=0;
    for (auto &&i : v)
    {
        ans+=i-m;
        cout<<ans<<" ";
        m++;
    }
    for (size_t i = m; i <= n; i++)
    {
        /* code */
        cout<<-1<<" ";
    }
    
    cout<<endl;
    
    
}
return 0;
}