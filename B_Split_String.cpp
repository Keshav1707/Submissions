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
const int M = 1e9+7;
signed main()
{
di(t);
string s;
char c;
cin>>s>>c;
vecll v;
int n=1;
for (auto &&i : s)
{
    if(i==c)v.pb(n);   
    n++;
}

ll ans=1;
for (int i = v.size() - 1; i >= 1; i--)
{
    /* code */
    ans=((ans%M)*(v[i]-v[i-1])%M)%M;
}
cout<<ans<<endl;
return 0;
}