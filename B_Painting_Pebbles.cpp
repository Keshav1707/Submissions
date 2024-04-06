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
di(k);
vecll v;
ll mini=LLONG_MAX,maxi=0;
for (size_t i = 0; i < n; i++)
{
    di(x);
    v.pb(x);
    maxi=max(maxi,x);
    mini=min(mini,x);
}
if(maxi-mini>k)cout<<"NO"<<endl;
else
{
    cout<<"YES"<<endl;
    for (auto &&e : v)
    {
        for (size_t i = 0; i < mini; i++)
        {
            /* code */
            cout<<1<<" ";
            e--;
        }
        if(e!=0)e--,cout<<1<<" ";
        ll a=2;
        for (size_t i = 0; i < e; i++)
        {
            /* code */
            cout<<a<<" ";
            a++;
        }
        cout<<endl;

        
    }
    
}


return 0;
}