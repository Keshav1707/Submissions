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
    di(x);
    di(y);
    di(z);
    ll a=__gcd(x,__gcd(y,z));
    ll c=0;
    c+=x/a+y/a+z/a-3;
    if(c>3)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
return 0;
}