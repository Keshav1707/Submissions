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
#define MOD            const int(1e9+7)
typedef pair<ll,ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector <ll> adj[4004];
const int M = (1e9+7);
signed main()
{
di(t);
while(t--)
{
    di(n);
    vecll v;
    for (size_t i = 0; i < n; i++)
    {
        char c;
        cin>>c;
        v.pb(c-'0');
        /* code */
    }
    ll ans=1;
    for (size_t i = 0; i < n-2; i+=2)
    {
        /* code */
        int d=0;
        
        if((v[i]&v[i+1])==v[i+2])d++;
        if((v[i]|v[i+1])==v[i+2])d++;
        if((v[i]^v[i+1])==v[i+2])d++;
        ans= ((ans%M)*(d%M))%M;
        if(d==0)break;
    }
    
    cout<<ans<<endl;
    
}
return 0;
}