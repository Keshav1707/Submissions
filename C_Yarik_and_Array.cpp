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
void solve()
{
    di(x);
    vecll v(x);
    for (auto &&i : v)
    {
        cin>>i;
    }
    ll sum=v[0],maxi=v[0];
    for (ll i = 1; i < x; i++)
    {
        /* code */
        //cout<<sum<<" ";
        if(sum<0)sum=0;

        if((v[i]-v[i-1])%2==0)
        {
            sum=v[i];
        }
        else sum+=v[i];
        maxi=max(sum,maxi);
                
    }
    maxi=max(sum,maxi);
    cout<<maxi<<endl;
    
    
}
signed main()
{
di(t);
while(t--)
{
    solve();
}
return 0;
}