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
vecll v;
v.pb(1);
ll prev =1;

while(t--)
{
    di(n);
    di(k);
    di(x);
    int sum=0;
    cout<<sum<<endl;
    if(x<=sum&&x>=k*k+1/2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}