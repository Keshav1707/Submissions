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
    di(n);
    ll maxia=LLONG_MAX,maxib=LLONG_MAX,suma=0,sumb=0;
    for (int i = 0; i < n; i++)
    {
        di(x);
        maxia=min(maxia,x);
        suma+=x;

    }
    for (int i = 0; i < n; i++)
    {
        di(x);
        maxib=min(maxib,x);
        sumb+=x;

    }
    cout<<min(suma+(n*maxib),sumb+(n*maxia))<<endl;
}
return 0;
}